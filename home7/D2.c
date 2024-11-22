#include <stdio.h>

// Рекурсивная функция для вычисления суммы чисел от 1 до N
int sum_numbers(int n) {
    if (n == 1) {
        return 1;  // Базовый случай: если N = 1, сумма равна 1
    }
    return n + sum_numbers(n - 1);  // Рекурсивный вызов для вычисления суммы
}

int main() {
    int n;

    // Ввод числа N
    scanf("%d", &n);

    // Вызов функции и вывод результата
    printf("%d\n", sum_numbers(n));

    return 0;
}

//D2