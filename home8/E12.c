#include <stdio.h>
#include <stdlib.h>

// Функция для сравнения чисел для сортировки по возрастанию
int compare_asc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Функция для сравнения чисел для сортировки по убыванию
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int arr[10];

    // Считываем массив из 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортируем первую половину массива по возрастанию
    qsort(arr, 5, sizeof(int), compare_asc);

    // Сортируем вторую половину массива по убыванию
    qsort(arr + 5, 5, sizeof(int), compare_desc);

    // Выводим отсортированный массив
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//E12
