#include <stdio.h>

int main() {
    int a, b;

    // Вводим два целых числа a и b
    scanf("%d %d", &a, &b);

    // Перебираем все числа от a до b и выводим их квадраты
    for (int i = a; i <= b; i++) {
        printf("%d ", i * i);
    }

    return 0;
}
//B2