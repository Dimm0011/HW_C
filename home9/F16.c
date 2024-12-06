#include <stdio.h>

int main() {
    char col;
    int row;

    // Ввод координаты клетки
    scanf("%c%d", &col, &row);

    // Преобразуем букву в число (A=0, ..., H=7)
    int col_index = col - 'A';

    // Преобразуем цифру в число (1=0, ..., 8=7)
    int row_index = row - 1;

    // Определяем цвет клетки по сумме индексов
    if ((col_index + row_index) % 2 == 0) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }

    return 0;
}

//F16
