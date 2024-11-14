#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод трех чисел
    scanf("%d %d %d", &a, &b, &c);

    // Находим наибольшее число
    int max = a;  // Предположим, что a - наибольшее

    if (b > max) {
        max = b;  // Если b больше max, то обновляем max
    }

    if (c > max) {
        max = c;  // Если c больше max, то обновляем max
    }

    // Выводим наибольшее число
    printf("%d\n", max);

    return 0;
}
//A8