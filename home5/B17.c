#include <stdio.h>

int main() {
    int n;
    
    // Вводим натуральное число больше 10
    scanf("%d", &n);

    // Перебираем все числа от 10 до n
    for (int num = 10; num <= n; num++) {
        int sum = 0, product = 1;
        int temp = num;

        // Для текущего числа вычисляем сумму и произведение цифр
        while (temp > 0) {
            int digit = temp % 10;  // Получаем последнюю цифру
            sum += digit;           // Добавляем к сумме
            product *= digit;       // Умножаем на произведение
            temp /= 10;             // Убираем последнюю цифру
        }

        // Если сумма цифр равна произведению, выводим число
        if (sum == product) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}

//B17