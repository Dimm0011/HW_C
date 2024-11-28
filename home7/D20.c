#include <stdio.h>

// Рекурсивная функция для возведения числа n в степень p
int recurs_power(int n, int p) {
    // Базовый случай: любое число в степени 0 равно 1
    if (p == 0) {
        return 1;
    }

    // Рекурсивный случай: n^p = n * n^(p-1)
    return n * recurs_power(n, p - 1);
}

int main() {
    int n, p;

    // Ввод чисел n и p
    scanf("%d %d", &n, &p);

    // Вывод результата возведения числа n в степень p
    printf("%d\n", recurs_power(n, p));

    return 0;
}

//D20
