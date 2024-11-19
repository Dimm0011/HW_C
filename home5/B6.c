#include <stdio.h>

int main() {
    int num;
    int prev_digit = -1;

    // Вводим целое число
    scanf("%d", &num);

    // Проходим по каждой цифре числа
    while (num > 0) {
        int current_digit = num % 10; // Получаем последнюю цифру числа
        if (current_digit == prev_digit) {
            printf("YES\n");
            return 0;
        }
        prev_digit = current_digit; // Сохраняем текущую цифру как предыдущую
        num /= 10; // Убираем последнюю цифру
    }

    // Если не нашли одинаковых цифр рядом
    printf("NO\n");

    return 0;
}
//B6