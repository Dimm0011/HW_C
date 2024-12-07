#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE + 1];  // Строка для хранения данных

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Убираем символ новой строки, если он есть
    str[strcspn(str, "\n")] = '\0';

    // Разбиваем строку на слова
    char *word = strtok(str, " ");

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем каждое слово в файл на новой строке
    while (word != NULL) {
        fprintf(outfile, "%s\n", word);
        word = strtok(NULL, " ");  // Переход к следующему слову
    }

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}
