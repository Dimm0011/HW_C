#include <stdio.h>

// Функция для вычисления среднего арифметического двух чисел
int middle(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int a, b;

    // Чтение двух целых чисел
    scanf("%d %d", &a, &b);

    // Вывод среднего арифметического
    printf("%d\n", middle(a, b));

    return 0;
}

//C3
