#include <stdio.h>
#include <string.h>

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

    // Проверяем, что строка не пуста
    if (strlen(text) == 0 || text[0] == '\0') {
        // Если файл пустой, просто записываем пустую строку в output.txt
        FILE *outfile = fopen("output.txt", "w");
        if (outfile == NULL) {
            printf("Ошибка при открытии файла output.txt\n");
            return 1;
        }
        fclose(outfile);  // Закрываем файл
        return 0;  // Завершаем программу
    }

    // Новый массив для хранения результата
    char result[MAX_SIZE + 1];
    int result_index = 0;

    // Переменная для обхода исходного текста
    char *pos = text;

    while (pos != NULL) {
        // Ищем вхождение "Ling"
        char *found = strstr(pos, "Ling");

        if (found != NULL) {
            // Копируем в result всё, что до "Ling"
            int len = found - pos;
            strncpy(result + result_index, pos, len);
            result_index += len;

            // Добавляем "Cao" в result
            strcpy(result + result_index, "Cao");
            result_index += 3;  // "Cao" длиной 3 символа

            // Сдвигаем указатель на позицию после "Ling"
            pos = found + 4;  // 4 символа для "Ling"
        } else {
            // Если "Ling" больше нет, копируем остаток строки
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



//G16
