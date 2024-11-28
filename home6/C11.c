#include <stdio.h>

// Функция для нахождения НОД (наибольший общий делитель)
int nod(int a, int b) {
    while (b != 0) {  // Пока второе число не станет 0
        int temp = b;
        b = a % b;  // Остаток от деления
        a = temp;  // Присваиваем a значение b
    }
    return a;  // Когда b станет 0, возвращаем a (НОД)
}

int main() {
    int a, b;

    // Ввод двух чисел
    scanf("%d %d", &a, &b);

    // Вывод НОД
    printf("%d\n", nod(a, b));

    return 0;
}

//C11
