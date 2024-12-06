#include <stdio.h>

#define N 5  // Размер матрицы

// Функция для вычисления среднего арифметического главной диагонали
double diagonal_average(int matrix[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += matrix[i][i];
    }
    return sum / (double)N;
}

int main() {
    int matrix[N][N];

    // Чтение матрицы
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисление среднего арифметического главной диагонали
    double avg = diagonal_average(matrix);

    // Подсчет положительных элементов, которые больше среднего
    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] > avg && matrix[i][j] > 0) {
                count++;
            }
        }
    }

    // Выводим результат
    printf("%d\n", count);

    return 0;
}


//F19
