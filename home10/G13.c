#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int main() {
    char path[MAX_SIZE + 1];  // Строка для хранения пути

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(path, sizeof(path), infile);
    fclose(infile);

    // Убираем символ новой строки, если он есть
    size_t len = strlen(path);
    if (len > 0 && path[len - 1] == '\n') {
        path[len - 1] = '\0';  // Убираем символ новой строки
    }

    // Ищем последний слэш в строке, который отделяет каталог от имени файла
    char *last_slash = strrchr(path, '/');

    // Если слэш найден, ищем точку в части строки после слэша
    if (last_slash != NULL) {
        char *file_part = last_slash + 1;  // Часть пути после последнего слэша (имя файла)

        // Ищем точку в имени файла
        char *dot_pos = strrchr(file_part, '.');

        if (dot_pos != NULL) {
            // Если точка найдена, обрезаем всё после неё и добавляем .html
            *dot_pos = '\0';  // Убираем старое расширение
            strcat(file_part, ".html");  // Добавляем новое расширение
        } else {
            // Если точки нет, добавляем .html в конец имени файла
            strcat(file_part, ".html");
        }
    } else {
        // Если нет слэша, просто добавляем .html
        strcat(path, ".html");
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл
    fprintf(outfile, "%s", path);

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}

//G13
