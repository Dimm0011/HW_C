#include <stdio.h>

// Функция для вычисления количества зерен на N-й клетке
unsigned long long grains_on_square(int N) {
    // Возвращаем количество зерен на N-й клетке: 2^(N-1)
    return (1ULL << (N - 1));  // Используем побитовый сдвиг для вычисления 2^(N-1)
}

int main() {
    int N;

    // Вводим номер клетки
    scanf("%d", &N);

    // Выводим количество зерен на данной клетке
    printf("%llu\n", grains_on_square(N));  // Используем %llu для вывода unsigned long long

    return 0;
}

//C6
