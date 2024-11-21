#include <stdio.h>

// Функция для возведения числа N в степень P
int power(int n, int p) {
    int result = 1;  // Инициализируем результат единицей
    for (int i = 0; i < p; i++) {
        result *= n;  // Умножаем результат на N P раз
    }
    return result;
}

int main() {
    int n, p;

    // Чтение двух целых чисел: N и P
    scanf("%d %d", &n, &p);

    // Вывод результата возведения в степень
    printf("%d\n", power(n, p));

    return 0;
}


//C2
