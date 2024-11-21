#include <stdio.h>

int sum_of_numbers(int N) {
    // Формула для суммы от 1 до N: S = N * (N + 1) / 2
    return (N * (N + 1)) / 2;
}

int main() {
    int N;
    // Ввод целого положительного числа N
    scanf("%d", &N);

    // Выводим сумму чисел от 1 до N
    printf("%d\n", sum_of_numbers(N));

    return 0;
}

//C5
