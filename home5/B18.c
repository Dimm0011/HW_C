#include <stdio.h>

int main() {
    int n;
    
    // Вводим количество чисел Фибоначчи
    scanf("%d", &n);

    // Для n = 1, выводим только одно число 1
    if (n == 1) {
        printf("1\n");
        return 0;
    }

    // Для n >= 2, начинаем с первых двух чисел Фибоначчи
    int a = 1, b = 1;

    // Печатаем первые два числа Фибоначчи
    printf("%d %d", a, b);

    // Вычисляем и выводим оставшиеся числа
    for (int i = 3; i <= n; i++) {
        int next = a + b;
        printf(" %d", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}

//B18