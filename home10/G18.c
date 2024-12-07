#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

void remove_extra_spaces(char *str) {
    int i = 0, j = 0;
    int len = strlen(str);

    // Убираем начальные пробелы
    while (i < len && isspace(str[i])) {
        i++;
    }

    // Убираем избыточные пробелы
    while (i < len) {
        if (isspace(str[i]) && (i == 0 || isspace(str[i-1]))) {
            i++;
        } else {
            str[j++] = str[i++];
        }
    }

    // Убираем пробелы в конце строки
    if (j > 0 && isspace(str[j-1])) {
        j--;
    }

    str[j] = '\0';  // Завершаем строку
}

int main() {
    char text[MAX_SIZE + 1];  // Массив для хранения текста

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(text, sizeof(text), infile);
    fclose(infile);

    // Удаляем лишние пробелы
    remove_extra_spaces(text);

    // Открытие файла для записи результата
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл
    fprintf(outfile, "%s", text);
    fclose(outfile);

    return 0;
}

//G18
