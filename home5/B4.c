#include <stdio.h>

int main() {
    int num;

    // Вводим целое число
    scanf("%d", &num);

    // Проверяем, состоит ли число из ровно трех цифр
    if (num >= 100 && num <= 999) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
//B4