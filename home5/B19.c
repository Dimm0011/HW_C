#include <stdio.h>

int main() {
    int num, sum = 0;

    // Вводим натуральное число
    scanf("%d", &num);

    // Считаем сумму цифр
    while (num > 0) {
        sum += num % 10;  // Получаем последнюю цифру и добавляем к сумме
        num /= 10;         // Убираем последнюю цифру
    }

    // Проверяем, равна ли сумма цифр 10
    if (sum == 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//B19