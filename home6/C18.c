#include <stdio.h>
#include <ctype.h>  // Для функции isdigit

// Функция, которая проверяет, является ли символ цифрой
int is_digit(char c) {
    return isdigit(c);  // Используем стандартную функцию для проверки
}

int main() {
    char c;
    int digit_count = 0;

    // Чтение символов до точки
    while ((c = getchar()) != '.') {
        if (is_digit(c)) {
            digit_count++;  // Увеличиваем счетчик, если символ - цифра
        }
    }

    // Вывод результата - количество цифр в тексте
    printf("%d\n", digit_count);

    return 0;
}

//C18
