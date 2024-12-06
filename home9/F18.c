#include <stdio.h>

#define N 10  // Размер матрицы 10x10

// Функция для нахождения максимального элемента в строке
int find_max_in_row(int row[]) {
    int max = row[0];  // Инициализируем максимальный элемент первым элементом строки
    for (int i = 1; i < N; ++i) {
        if (row[i] > max) {
            max = row[i];  // Обновляем максимум, если найден больший элемент
        }
    }
    return max;
}

int main() {
    int matrix[N][N];
    int sum_of_max = 0;

    // Ввод матрицы
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Для каждой строки находим максимум и суммируем
    for (int i = 0; i < N; ++i) {
        sum_of_max += find_max_in_row(matrix[i]);
    }

    // Вывод результата
    printf("%d\n", sum_of_max);

    return 0;
}

//F18
