#include <stdio.h>

int main() {
    int num;
    int count = 0;

    // Вводим целое число
    scanf("%d", &num);

    // Проходим по числу
    while (num > 0) {
        if (num % 10 == 9) {  // Проверяем, является ли последняя цифра 9
            count++;
        }
        num /= 10;  // Убираем последнюю цифру
    }

    // Если ровно одна цифра 9, выводим YES
    if (count == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
//B8