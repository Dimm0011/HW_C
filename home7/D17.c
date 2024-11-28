#include <stdio.h>

// Рекурсивная функция Аккермана
int akkerman(int m, int n) {
    // Базовые условия
    if (m == 0) {
        return n + 1;  // Если m == 0, возвращаем n + 1
    } else if (m > 0 && n == 0) {
        return akkerman(m - 1, 1);  // Если m > 0 и n == 0, вычисляем A(m-1, 1)
    } else if (m > 0 && n > 0) {
        return akkerman(m - 1, akkerman(m, n - 1));  // Иначе вычисляем A(m-1, A(m, n-1))
    }
    return 0;  // На случай непредусмотренных условий
}

int main() {
    int m, n;

    // Ввод значений m и n
    scanf("%d %d", &m, &n);

    // Вывод результата работы функции Аккермана
    printf("%d\n", akkerman(m, n));

    return 0;
}

//D17
