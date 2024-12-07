#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];  // Максимум 1000 символов + 1 для завершающего нуля
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1;
    }

    // Чтение строки из файла
    fgets(str, sizeof(str), infile);
    fclose(infile);

    // Удаляем символ новой строки, если он есть
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Убираем символ новой строки
        len--;  // Уменьшаем длину строки на 1
    }

    // Найдем последний символ строки
    char last_char = str[len - 1];

    // Массив для хранения номеров
    int indices[1000];
    int count = 0;

    // Ищем все позиции, где символ совпадает с последним, но до последнего символа
    for (int i = 0; i < len - 1; i++) {  // Ищем до предпоследнего символа
        if (str[i] == last_char) {
            indices[count++] = i;  // Номера символов с 1
        }
    }

    // Открытие файла для записи
    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Запись индексов в файл
    for (int i = 0; i < count; i++) {
        fprintf(outfile, "%d ", indices[i]);
    }

    // Закрытие выходного файла
    fclose(outfile);

    return 0;
}


//G3
