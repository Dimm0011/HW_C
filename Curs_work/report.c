#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

// Функция для вывода справки
void print_help() {
    printf("Использование программы:\n");
    printf("  -h           Выводит информацию о функционале программы.\n");
    printf("  -f <file_name>  Указывает файл CSV для обработки. (Обязательный параметр)\n");
    printf("  -m <month>     Выводит статистику только для указанного месяца (1-12). (Опционально)\n");
}

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const char* filename = NULL;
    int month = 0;  // 0 означает, что фильтрация по месяцу не применяется

    // Если нет аргументов командной строки, выводим справку
    if (argc == 1) {
        print_help();
        return 0;
    }

    // Обрабатываем аргументы командной строки
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {  // Проверка, что это ключ
            switch (argv[i][1]) {  // Сравниваем второй символ (например, 'f' для "-f")
                case 'h':
                    print_help();
                    return 0;

                case 'f':
                    // Для параметра '-f' ожидаем, что следующий аргумент — это имя файла
                    if (i + 1 < argc) {
                        filename = argv[++i];  // Получаем имя файла
                        printf("Выбран файл: %s\n", filename);  // Выводим выбранный файл для отладки
                    } else {
                        fprintf(stderr, "Ошибка: Не указан файл после '-f'\n");
                        return 1;
                    }
                    break;

                case 'm':
                    // Для параметра '-m' ожидаем, что следующий аргумент — это номер месяца
                    if (i + 1 < argc) {
                        month = atoi(argv[++i]);  // Получаем месяц
                        if (month < 1 || month > 12) {
                            fprintf(stderr, "Ошибка: Месяц должен быть в диапазоне от 1 до 12\n");
                            return 1;
                        }
                        printf("Выбран месяц: %d\n", month);  // Для отладки
                    } else {
                        fprintf(stderr, "Ошибка: Не указан месяц после '-m'\n");
                        return 1;
                    }
                    break;

                default:
                    fprintf(stderr, "Неизвестная опция: %s\n", argv[i]);
                    return 1;
            }
        } else {
            // Если это не ключ, можно обработать дополнительные параметры
            fprintf(stderr, "Неизвестный аргумент: %s\n", argv[i]);
            return 1;
        }
    }

    // Проверка, что файл был указан
    if (!filename) {
        fprintf(stderr, "Ошибка: Необходимо указать файл с помощью ключа -f\n");
        return 1;
    }

    // Загружаем данные из файла
    TemperatureRecord* records;
    int record_count;

    if (load_data_from_csv(filename, &records, &record_count) != 0) {
        return 1;
    }

    // Выводим статистику
    print_statistics(records, record_count, month);  // Передаем месяц

    // Освобождаем память
    free(records);
    return 0;
}