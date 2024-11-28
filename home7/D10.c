#include <stdio.h>
#include <math.h>

// Рекурсивная функция для проверки простоты числа
int is_prime(int n, int delitel) {
    // Базовый случай: если делитель больше корня числа, то число простое
    if (delitel * delitel > n) {
        return 1;  // Число простое
    }
    // Если число делится на текущий делитель, то оно не простое
    if (n % delitel == 0) {
        return 0;  // Число не простое
    }
    // Рекурсивный вызов для следующего делителя
    return is_prime(n, delitel + 1);
}

int main() {
    int n;

    // Ввод числа
    scanf("%d", &n);

    // Специальный случай для 1, так как 1 не является простым числом
    if (n == 1) {
        printf("NO\n");
        return 0;
    }

    // Проверяем, простое ли число с использованием рекурсивной функции
    if (is_prime(n, 2)) {
        printf("YES\n");  // Число простое
    } else {
        printf("NO\n");   // Число не простое
    }

    return 0;
}

//D10