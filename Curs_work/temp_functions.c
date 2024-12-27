#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

// Функция для загрузки данных из CSV

// Функция для загрузки данных из CSV файла
int load_data_from_csv(const char *filename, TemperatureRecord **records, int *record_count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Ошибка: Не удалось открыть файл %s\n", filename);
        return 1;
    }

    // Начальные значения
    int capacity = 10;
    *records = malloc(capacity * sizeof(TemperatureRecord));
    if (*records == NULL) {
        fprintf(stderr, "Ошибка: Не удалось выделить память для записей\n");
        fclose(file);
        return 1;
    }

    *record_count = 0;

    // Пропускаем заголовок CSV
    char line[256];
    fgets(line, sizeof(line), file); // Читаем строку с заголовками (если есть)

    // Чтение данных
    while (fgets(line, sizeof(line), file)) {
        // Проверка на переполнение массива
        if (*record_count >= capacity) {
            capacity *= 2;  // Увеличиваем размер массива
            *records = realloc(*records, capacity * sizeof(TemperatureRecord));
            if (*records == NULL) {
                fprintf(stderr, "Ошибка: Не удалось перераспределить память\n");
                fclose(file);
                return 1;
            }
        }

        TemperatureRecord record;
        // Считываем данные из строки CSV
        int result = sscanf(line, "%d;%d;%d;%d;%d;%d", &record.year, &record.month, &record.day,
                             &record.hour, &record.minute, &record.temperature);

        // Проверка на успешное считывание всех данных
        if (result != 6) {
            fprintf(stderr, "Ошибка: Неверный формат данных в строке: %s", line);
            continue;  // Пропускаем некорректные строки
        }

        // Добавляем корректную запись в массив
        (*records)[*record_count] = record;
        (*record_count)++;
    }

    fclose(file);
    return 0;  // Успешно
}
// Функция для вывода статистики по месяцу
void print_month_statistics(TemperatureRecord* records, int record_count, int month) {
    int sum = 0, min_temp = 999, max_temp = -999;
    int count = 0;

    for (int i = 0; i < record_count; i++) {
        if (records[i].month == month) {
            sum += records[i].temperature;
            if (records[i].temperature < min_temp) min_temp = records[i].temperature;
            if (records[i].temperature > max_temp) max_temp = records[i].temperature;
            count++;
        }
    }

    if (count > 0) {
        printf("Статистика за месяц %d:\n", month);
        printf("Средняя температура: %.2f\n", (float)sum / count);
        printf("Минимальная температура: %d\n", min_temp);
        printf("Максимальная температура: %d\n", max_temp);
    } else {
        printf("Данных за месяц %d нет.\n", month);
    }
}

// Функция для вывода статистики за год
void print_year_statistics(TemperatureRecord* records, int record_count) {
    int sum = 0, min_temp = 999, max_temp = -999;
    int count = 0;

    for (int i = 0; i < record_count; i++) {
        sum += records[i].temperature;
        if (records[i].temperature < min_temp) min_temp = records[i].temperature;
        if (records[i].temperature > max_temp) max_temp = records[i].temperature;
        count++;
    }

    if (count > 0) {
        printf("Годовая статистика:\n");
        printf("Средняя температура: %.2f\n", (float)sum / count);
        printf("Минимальная температура: %d\n", min_temp);
        printf("Максимальная температура: %d\n", max_temp);
    } else {
        printf("Данных нет.\n");
    }
}

// Функция для вывода общей статистики (по месяцу или году)
void print_statistics(TemperatureRecord* records, int record_count, int month) {
    if (month == 0) {
        print_year_statistics(records, record_count);  // Если месяц не указан, выводим статистику за год
    } else {
        print_month_statistics(records, record_count, month);  // Иначе выводим статистику по месяцу
    }
}
