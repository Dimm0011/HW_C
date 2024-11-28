#include <stdio.h>

int main() {
    int arr[10];  // Массив для хранения 10 чисел
    int count[1001] = {0};  // Массив для подсчета вхождений чисел в диапазоне от -500 до 500
    int result[10], result_size = 0;  // Массив для результата

    // Считываем 10 чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        count[arr[i] + 500]++;  // Увеличиваем счетчик для данного числа, сдвигаем на 500
    }

    // Заполняем результат числами, которые встречаются более одного раза
    for (int i = 0; i < 10; i++) {
        if (count[arr[i] + 500] > 1) {
            // Добавляем число в результат, если оно встречается более одного раза
            // Но при этом проверяем, чтобы оно не добавлялось повторно
            int already_added = 0;
            for (int j = 0; j < result_size; j++) {
                if (result[j] == arr[i]) {
                    already_added = 1;
                    break;
                }
            }
            if (!already_added) {
                result[result_size++] = arr[i];
            }
        }
    }

    // Выводим результат
    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}


//E14
