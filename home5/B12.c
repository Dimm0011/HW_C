#include <stdio.h>

int main() {
    int num;
    int min_digit = 9, max_digit = 0;  // Инициализируем минимальную и максимальную цифры

    // Вводим целое неотрицательное число
    scanf("%d", &num);

    // Проходим по цифрам числа
    while (num > 0) {
        int digit = num % 10;  // Получаем последнюю цифру числа

        // Обновляем минимальную и максимальную цифры
        if (digit < min_digit) {
            min_digit = digit;
        }
        if (digit > max_digit) {
            max_digit = digit;
        }

        num /= 10;  // Убираем последнюю цифру
    }

    // Выводим наименьшую и наибольшую цифры
    printf("%d %d\n", min_digit, max_digit);

    return 0;
}

//B12