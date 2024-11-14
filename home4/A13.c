#include <stdio.h>

int main() {
    int num;

    // Ввод трехзначного числа
    scanf("%d", &num);

    // Извлечение цифр числа
    int hundreds = num / 100;    // Сотни
    int tens = (num / 10) % 10;  // Десятки
    int ones = num % 10;         // Единицы

    // Вычисление произведения цифр
    int product = hundreds * tens * ones;

    // Выводим произведение цифр
    printf("%d\n", product);

    return 0;
}
//A13