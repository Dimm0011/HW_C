#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Вводим число
    scanf("%d", &n);

    // Если число меньше 2, оно не простое
    if (n <= 1) {
        printf("NO\n");
        return 0;
    }

    // Проверяем, является ли число простым
    // Для чисел больше 1 и 2 проверяем делители от 2 до sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("NO\n");
            return 0;
        }
    }

    // Если делителей не нашли, то число простое
    printf("YES\n");

    return 0;
}

//B20