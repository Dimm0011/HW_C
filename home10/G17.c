#include <stdio.h>
#include <string.h>

void swap_pairs(char *str) {
    int len = strlen(str);

    // Массив для хранения не-пробельных символов
    char new_str[1001];
    int idx = 0;

    // Заполняем массив new_str, игнорируя пробелы
    for (int j = 0; j < len; j++) {
        if (str[j] != ' ') {
            new_str[idx++] = str[j];
        }
    }
    new_str[idx] = '\0';  // Завершаем строку

    // Перемещаем по символам и меняем местами соседние символы
    for (int i = 0; i < idx - 1; i += 2) {
        char temp = new_str[i];
        new_str[i] = new_str[i + 1];
        new_str[i + 1] = temp;
    }

    // Теперь переносим измененную строку back в исходную с учётом пробелов
    int new_idx = 0;
    for (int j = 0; j < len; j++) {
        if (str[j] == ' ') {
            str[j] = ' ';  // Пробел оставляем на месте
        } else {
            str[j] = new_str[new_idx++];
        }
    }
}

int main() {
    // Открытие файлов
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Ошибка при открытии файлов.\n");
        return 1;
    }

    // Считывание строки из файла input.txt
    char str[1001];  // Максимум 1000 символов + 1 для нулевого символа
    fgets(str, 1001, input);

    // Удаление символа новой строки, если он есть
    str[strcspn(str, "\n")] = '\0';

    // Вызов функции для замены пар
    swap_pairs(str);

    // Запись результата в output.txt
    fprintf(output, "%s\n", str);

    // Закрытие файлов
    fclose(input);
    fclose(output);

    return 0;
}



//G17
