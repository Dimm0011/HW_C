#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 1000

// Функция для извлечения чисел из строки
void extract_numbers(const char *str, int *arr, int *count) {
    int num = 0;
    int in_number = 0;  // Флаг, указывающий на то, что мы находимся внутри числа
    *count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            // Если это цифра, добавляем её в число
            if (!in_number) {
                in_number = 1;  // Начали число
                num = str[i] - '0';  // Преобразуем символ в число
            } else {
                num = num * 10 + (str[i] - '0');  // Добавляем цифру в число
            }
        } else {
            // Если мы встречаем нецифровой символ и уже были внутри числа
            if (in_number) {
                arr[*count] = num;  // Сохраняем число в массив
                (*count)++;
                in_number = 0;  // Выходим из числа
            }
        }
    }

    // Если строка заканчивается числом, нужно сохранить его в массив
    if (in_number) {
        arr[*count] = num;
        (*count)++;
    }
}

int main() {
    char str[MAX_SIZE + 1];  // Строка для хранения данных
    int numbers[MAX_SIZE];  // Массив для хранения чисел
    int count = 0;

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Извлекаем числа из строки
    extract_numbers(str, numbers, &count);

    // Сортировка массива чисел
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                // Обмен значениями
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем отсортированные числа в файл
    for (int i = 0; i < count; i++) {
        fprintf(outfile, "%d", numbers[i]);
        if (i < count - 1) {
            fprintf(outfile, " ");
        }
    }
    fprintf(outfile, "\n");

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}

//G8
