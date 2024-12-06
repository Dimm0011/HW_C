#include <stdio.h>

#define N 5  // Размерность матрицы 5x5

int main() {
    int matrix[N][N];  // Матрица 5x5
    int trace = 0;     // Сумма элементов главной диагонали

    // Ввод матрицы
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисление следа матрицы (сумма элементов главной диагонали)
    for (int i = 0; i < N; ++i) {
        trace += matrix[i][i];  // Элемент на главной диагонали: matrix[i][i]
    }

    // Вывод результата
    printf("%d\n", trace);

    return 0;
}

//F17
