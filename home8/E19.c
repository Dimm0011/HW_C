#include <stdio.h>

int main() {
    char N[100];  // Строка для хранения числа

    // Вводим число как строку
    scanf("%s", N);

    // Проходим по строке и выводим каждую цифру
    for (int i = 0; N[i] != '\0'; i++) {
        if (i > 0) {
            printf(" ");  // Печатаем пробел перед каждой цифрой, кроме первой
        }
        printf("%c", N[i]);  // Выводим текущую цифру
    }

    return 0;
}


//E19
