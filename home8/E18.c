#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Ввод числа N

    // Для каждого числа от 2 до 9
    for (int i = 2; i <= 9; i++) {
        int count = 0;

        // Подсчитаем, сколько чисел от 2 до N кратны числу i
        for (int j = 2; j <= N; j++) {
            if (j % i == 0) {
                count++;
            }
        }

        // Выводим число и количество чисел, кратных ему
        printf("%d %d\n", i, count);
    }

    return 0;
}

//E18
