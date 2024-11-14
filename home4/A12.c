#include <stdio.h>

int main() {
    int num;

    // Ввод трехзначного числа
    scanf("%d", &num);

    // Извлечение цифр числа
    int hundreds = num / 100;    // Сотни
    int tens = (num / 10) % 10;  // Десятки
    int ones = num % 10;         // Единицы

    // Суммируем цифры
    int sum = hundreds + tens + ones;

    // Выводим сумму цифр
    printf("%d\n", sum);

    return 0;
}
//A12