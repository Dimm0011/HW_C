#include <stdio.h>

void swap_negmax_last(int size, int a[]) {
    int index_max_neg = -1;  // Индекс максимального отрицательного элемента

    // Ищем максимальный отрицательный элемент
    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && (index_max_neg == -1 || a[i] > a[index_max_neg])) {
            index_max_neg = i;
        }
    }

    // Если такой элемент найден, меняем его с последним элементом
    if (index_max_neg != -1) {
        int temp = a[index_max_neg];
        a[index_max_neg] = a[size - 1];
        a[size - 1] = temp;
    }
}
/*
int main() {
    int arr[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Вызываем функцию для обмена
    swap_negmax_last(size, arr);

    // Печатаем результат
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/

//F9
