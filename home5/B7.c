#include <stdio.h>

int main() {
    int num;
    int digits_seen[10] = {0}; // Массив для отслеживания цифр (от 0 до 9)

    // Вводим целое число
    scanf("%d", &num);

    // Проходим по каждой цифре числа
    while (num > 0) {
        int current_digit = num % 10; // Получаем последнюю цифру числа
        if (digits_seen[current_digit] == 1) {
            // Если цифра уже встречалась, выводим YES
            printf("YES\n");
            return 0;
        }
        digits_seen[current_digit] = 1; // Отмечаем, что эта цифра встречалась
        num /= 10; // Убираем последнюю цифру
    }

    // Если не нашли одинаковых цифр
    printf("NO\n");

    return 0;
}
//B7