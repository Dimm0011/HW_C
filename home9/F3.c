#include <stdio.h>
#include <string.h>

void count_digits(char *n) {
    int count[10] = {0};  // Массив для подсчёта цифр от 0 до 9

    // Проходим по каждому символу строки
    for (int i = 0; n[i] != '\0'; i++) {
        count[n[i] - '0']++;  // Увеличиваем счетчик для соответствующей цифры
    }

    // Выводим цифры с их количеством
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {  // Если цифра встречалась хотя бы один раз
            printf("%d %d\n", i, count[i]);
        }
    }
}

int main() {
    char n[1001];  // Массив для хранения числа (до 1000 цифр)

    // Считываем число (ввод как строка)
    scanf("%s", n);

    // Вызываем функцию подсчета и вывода цифр
    count_digits(n);

    return 0;
}

//F3