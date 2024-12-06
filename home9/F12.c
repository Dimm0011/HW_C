#include <stdio.h>

void change_max_min(int size, int a[]) {
    // Проверяем, что размер массива больше 1
    if (size <= 1) return;

    // Инициализация индексов минимального и максимального элементов
    int min_index = 0, max_index = 0;

    // Ищем индексы минимального и максимального элемента
    for (int i = 1; i < size; i++) {
        if (a[i] < a[min_index]) {
            min_index = i;
        }
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }

    // Меняем минимальный и максимальный элементы местами
    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;
}
/*
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Вызываем функцию для изменения местами минимального и максимального элементов
    change_max_min(size, arr);

    // Выводим измененный массив
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/

//F12
