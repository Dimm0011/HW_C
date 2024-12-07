#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];  // Массив для строки (максимум 1000 символов)

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Процесс замены символов
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'b';
        } else if (str[i] == 'A') {
            str[i] = 'B';
        } else if (str[i] == 'b') {
            str[i] = 'a';
        } else if (str[i] == 'B') {
            str[i] = 'A';
        }
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Запись измененной строки в файл
    fputs(str, outfile);
    fclose(outfile);

    return 0;
}
