#include <stdio.h>

int main() {
    int n;

    // Вводим натуральное число
    scanf("%d", &n);

    // Для каждого числа от 1 до n
    for (int i = 1; i <= n; i++) {
        // Выводим квадрат и куб
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}
//B1