#include <stdio.h>

void find_min_sum_pair(int arr[], int size) {
    int min_sum = arr[0] + arr[1];  // Инициализируем минимальную сумму как сумму первых двух элементов
    int index1 = 0, index2 = 1;     // Индексы элементов, которые дают минимальную сумму

    // Перебираем все пары элементов
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int sum = arr[i] + arr[j];
            if (sum < min_sum) {  // Если сумма пары меньше текущей минимальной суммы
                min_sum = sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    // Выводим индексы в порядке возрастания
    if (index1 > index2) {
        int temp = index1;
        index1 = index2;
        index2 = temp;
    }

    printf("%d %d\n", index1, index2);
}

int main() {
    int arr[30];
    // Вводим элементы массива
    for (int i = 0; i < 30; i++) {
        scanf("%d", &arr[i]);
    }

    // Вызываем функцию для поиска минимальной суммы
    find_min_sum_pair(arr, 30);

    return 0;
}

//F11
