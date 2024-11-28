#include <stdio.h>
#include <math.h>

// Если M_PI не определено, определяем его сами
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

// Факториал числа n
double factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Функция для вычисления косинуса с использованием ряда Тейлора
double cosinus(double x) {
    // Преобразуем x в радианы
    x = x * (M_PI / 180.0);  // Используем M_PI для преобразования в радианы

    double result = 1.0;  // Сумма членов ряда, начинаем с первого члена, который равен 1
    double term;          // Текущий член ряда
    int n = 1;            // Индекс члена ряда

    // Считаем элементы ряда до достижения точности 0.001
    do {
        // Вычисляем текущий член ряда
        term = (n % 2 == 0 ? 1 : -1) * (pow(x, 2 * n) / factorial(2 * n));
        result += term;
        n++;
    } while (fabs(term) > 0.001);  // Продолжаем до тех пор, пока текущий член ряда не меньше 0.001

    return result;
}

int main() {
    double x;

    // Ввод угла (в градусах)
    scanf("%lf", &x);

    // Вычисление косинуса и вывод результата с точностью до 3 знаков после запятой
    printf("%.3f\n", cosinus(x));

    return 0;
}

//C13
