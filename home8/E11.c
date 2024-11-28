#include <stdio.h>
#include <stdlib.h>

// Функция для извлечения последней цифры
int last_digit(int x) {
    return x % 10;
}

// Функция сравнения для сортировки по последней цифре
int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    // Сравниваем последние цифры чисел
    return last_digit(num1) - last_digit(num2);
}

int main() {
    int arr[10];

    // Считываем 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортируем массив с использованием кастомной функции сравнения
    qsort(arr, 10, sizeof(int), compare);

    // Выводим отсортированный массив
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//E11
