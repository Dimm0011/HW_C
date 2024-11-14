#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод сторон треугольника
    scanf("%d %d %d", &a, &b, &c);

    // Проверка неравенства треугольника
    if (a + b > c && a + c > b && b + c > a) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


//A16
