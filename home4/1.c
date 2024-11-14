#include <stdio.h>

int main() {
    int a, b;

    // Ввод двух чисел
    scanf("%d %d", &a, &b);

    // Сравниваем числа и выводим в порядке возрастания
    if (a > b) {
        // Меняем местами, если a больше b
        int temp = a;
        a = b;
        b = temp;
    }

    // Выводим числа в порядке возрастания
    printf("%d %d\n", a, b);

    return 0;
}
