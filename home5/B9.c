#include <stdio.h>

int main() {
    int num;

    // Вводим целое число
    scanf("%d", &num);

    // Проходим по числу
    while (num > 0) {
        int digit = num % 10;  // Получаем последнюю цифру числа

        // Если цифра нечётная, выводим NO и завершаем программу
        if (digit % 2 != 0) {
            printf("NO\n");
            return 0;
        }

        num /= 10;  // Убираем последнюю цифру
    }

    // Если все цифры чётные, выводим YES
    printf("YES\n");

    return 0;
}

//B9