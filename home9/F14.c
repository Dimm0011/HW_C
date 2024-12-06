#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]) {
    int sum = 0;

    // Проверяем, чтобы from не был больше to, если это так, меняем их местами
    if (from > to) {
        int temp = from;
        from = to;
        to = temp;
    }

    // Проходим по всем элементам массива
    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {  // Если элемент лежит в интервале [from, to]
            sum += a[i];  // Добавляем элемент к сумме
        }
    }

    return sum;  // Возвращаем сумму подходящих элементов
}
/*
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int from = 4, to = 6;

    // Вызов функции и вывод результата
    int result = sum_between_ab(from, to, size, arr);
    printf("%d\n", result);  // Ожидаемый результат: 15

    return 0;
}*/

//F14
