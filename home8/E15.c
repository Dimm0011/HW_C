#include <stdio.h>

int main() {
    int arr[10];       // Массив для ввода чисел
    int pos[10], neg[10]; // Массивы для положительных и отрицательных чисел
    int pos_count = 0, neg_count = 0; // Счетчики для положительных и отрицательных чисел

    // Считываем 10 чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Разделяем числа на положительные и отрицательные
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            pos[pos_count++] = arr[i];  // Добавляем положительное число в массив pos
        } else if (arr[i] < 0) {
            neg[neg_count++] = arr[i];  // Добавляем отрицательное число в массив neg
        }
    }

    // Выводим положительные числа
    for (int i = 0; i < pos_count; i++) {
        printf("%d ", pos[i]);
    }

    // Выводим отрицательные числа
    for (int i = 0; i < neg_count; i++) {
        printf("%d ", neg[i]);
    }

    printf("\n");

    return 0;
}

//E15
