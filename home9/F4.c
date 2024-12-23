#include <stdio.h>
#include <ctype.h>

void print_digit(char s[]) {
    int count[10] = {0};  // Массив для подсчёта цифр от 0 до 9

    // Проходим по каждому символу строки
    for (int i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {  // Если символ является цифрой
            count[s[i] - '0']++;  // Увеличиваем счетчик для соответствующей цифры
        }
    }

    // Выводим цифры с их количеством
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {  // Если цифра встречалась хотя бы один раз
            printf("%d %d\n", i, count[i]);
        }
    }
}
/*
int main() {
    char str[1001];  // Массив для ввода строки (до 1000 символов)

    // Вводим строку
    fgets(str, sizeof(str), stdin);

    // Вызываем функцию для обработки строки
    print_digit(str);

    return 0;
}
*/

//F4
