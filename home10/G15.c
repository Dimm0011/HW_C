#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    char text[MAX_SIZE + 1];  // Массив для хранения текста

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение текста из файла
    fgets(text, sizeof(text), infile);
    fclose(infile);

    // Мы будем использовать динамическую память для нового текста с заменами
    char result[MAX_SIZE + 1];
    int result_index = 0;

    // Переменная для обхода исходного текста
    char *pos = text;

    while (pos != NULL) {
        // Ищем вхождение "Cao"
        char *found = strstr(pos, "Cao");

        if (found != NULL) {
            // Копируем в result всё, что до "Cao"
            int len = found - pos;
            strncpy(result + result_index, pos, len);
            result_index += len;

            // Добавляем "Ling" в result
            strcpy(result + result_index, "Ling");
            result_index += 4;  // "Ling" длиной 4 символа

            // Сдвигаем указатель на позицию после "Cao"
            pos = found + 3;  // 3 символа для "Cao"
        } else {
            // Если "Cao" больше нет, копируем остаток строки
            strcpy(result + result_index, pos);
            break;
        }
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Запись изменённого текста в файл
    fprintf(outfile, "%s", result);
    fclose(outfile);

    return 0;
}

//G15
