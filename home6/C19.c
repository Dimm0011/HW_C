#include <stdio.h>
#include <ctype.h>  // Для функции isdigit

// Функция для преобразования символа цифры в число
int digit_to_num(char c) {
    return c - '0';  // Преобразуем символ цифры в число, вычитая ASCII значение '0'
}

int main() {
    char c;
    int sum = 0;

    // Чтение строки до точки
    while ((c = getchar()) != '.') {
        if (isdigit(c)) {
            sum += digit_to_num(c);  // Преобразуем цифру в число и добавляем к сумме
        }
    }

    // Выводим результат - сумму цифр в тексте
    printf("%d\n", sum);

    return 0;
}

//C19
