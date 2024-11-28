#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Функция для сравнения двух символов (для сортировки по убыванию)
int compare(const void *a, const void *b) {
    return (*(char*)b - *(char*)a); // Сортировка по убыванию
}

int main() {
    char num[101]; // Строка для хранения числа (максимум 100 цифр)

    // Чтение входного числа
    scanf("%s", num);

    // Определяем длину строки
    int length = strlen(num);

    // Сортируем строку цифр по убыванию
    qsort(num, length, sizeof(char), compare);

    // Выводим результат
    printf("%s\n", num);

    return 0;
}

//E20
