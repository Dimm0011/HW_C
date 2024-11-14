#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод трех чисел
    scanf("%d %d %d", &a, &b, &c);

    // Проверяем, что числа введены в порядке возрастания
    if (a < b && b < c) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//A16