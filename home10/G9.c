#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE + 1];  // Строка для хранения данных
    char result[MAX_SIZE + 1]; // Массив для результата (с уникальными символами)
    int seen[256] = {0};  // Массив для отслеживания встреченных символов (256 для всех возможных символов)
    int result_index = 0;  // Индекс для записи в результат

    // Открытие файла для чтения
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Проходим по строке и добавляем в result только уникальные символы
    for (int i = 0; str[i] != '\0'; i++) {
        // Игнорируем пробелы и проверяем, был ли символ уже в строке
        if (str[i] != ' ' && !seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;  // Отметить символ как встреченный
            result[result_index++] = str[i];   // Добавить символ в результат
        }
    }

    // Завершаем строку результатом
    result[result_index] = '\0';

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Записываем результат в файл
    fprintf(outfile, "%s", result);

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}
