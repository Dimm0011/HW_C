#include <stdio.h>

int main() {
    int number;

    // Ввод трехзначного числа
    scanf("%d", &number);

    // Извлекаем цифры числа
    int hundreds = number / 100;      // Сотни
    int tens = (number / 10) % 10;    // Десятки
    int ones = number % 10;           // Единицы

    // Находим максимальную цифру
    int max_digit = hundreds;

    if (tens > max_digit) {
        max_digit = tens;
    }

    if (ones > max_digit) {
        max_digit = ones;
    }

    // Выводим максимальную цифру
    printf("%d\n", max_digit);

    return 0;
}
//A14