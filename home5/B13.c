#include <stdio.h>

int main() {
    int num;
    int even_count = 0, odd_count = 0;

    // Вводим целое неотрицательное число
    scanf("%d", &num);

    // Проходим по цифрам числа
    while (num > 0) {
        int digit = num % 10;  // Получаем последнюю цифру числа

        // Проверяем, чётная ли цифра
        if (digit % 2 == 0) {
            even_count++;  // Увеличиваем счётчик чётных цифр
        } else {
            odd_count++;   // Увеличиваем счётчик нечётных цифр
        }

        num /= 10;  // Убираем последнюю цифру
    }

    // Выводим количество чётных и нечётных цифр
    printf("%d %d\n", even_count, odd_count);

    return 0;
}

//B13