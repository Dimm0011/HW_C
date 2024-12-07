#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *output_file;
    char str[101];  // Массив для строки (до 100 символов + 1 для '\0')

    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Не удалось открыть файл input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    if (fgets(str, sizeof(str), input_file) == NULL) {
        printf("Ошибка при чтении строки\n");
        fclose(input_file);
        return 1;
    }

    // Закрытие входного файла
    fclose(input_file);

    // Убираем лишний символ переноса строки, если он есть
    str[strcspn(str, "\n")] = '\0';

    // Подсчитываем количество символов в строке
    int len = strlen(str);

    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Не удалось открыть файл output.txt\n");
        return 1;
    }

    // Запись в файл: строка 3 раза через запятую и пробел, затем количество символов
    fprintf(output_file, "%s, %s, %s %d\n", str, str, str, len);

    // Закрытие выходного файла
    fclose(output_file);

    return 0;
}

//G1
