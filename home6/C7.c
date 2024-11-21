#include <stdio.h>

void decimal_to_base(int N, int P) {
    if (N == 0) {
        printf("0");
        return;
    }

    // Массив для хранения цифр в строковом виде
    char result[32];
    int index = 0;

    // Основной цикл, который накапливает остатки от деления
    while (N > 0) {
        result[index++] = (N % P) + '0'; // Сохраняем цифры как символы
        N /= P; // Делаем деление на основание
    }

    // Выводим результат в обратном порядке
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
}

int main() {
    int N, P;
    // Вводим два числа N и P
    scanf("%d %d", &N, &P);

    decimal_to_base(N, P); // Вызываем функцию для перевода числа

    return 0;
}

//C7
