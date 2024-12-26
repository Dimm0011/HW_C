#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "temp_functions.h"

// Функция вывода справки
void print_help() {
    printf("Usage: \n");
    printf("-h          Show help\n");
    printf("-f <filename.csv>  Specify the input CSV file\n");
    printf("-m <month>   Show statistics for the specified month\n");
}

// Чтение CSV файла и сохранение данных в массив
int parse_csv_file(const char* filename, TemperatureData* data, int max_records) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return -1;
    }

    char line[100];
    int record_count = 0;

    while (fgets(line, sizeof(line), file)) {
        if (parse_line(line, &data[record_count]) == 0) {
            record_count++;
            if (record_count >= max_records) {
                break;
            }
        }
    }

    fclose(file);
    return record_count;
}

// Парсинг строки CSV в структуру
int parse_line(char* line, TemperatureData* entry) {
    int year, month, day, hour, minute, temperature;
    if (sscanf(line, "%d %d %d %d %d %d", &year, &month, &day, &hour, &minute, &temperature) != 6) {
        return -1;  // Ошибка в формате
    }

    entry->year = year;
    entry->month = month;
    entry->day = day;
    entry->hour = hour;
    entry->minute = minute;
    entry->temperature = temperature;

    return 0;
}

// Расчет статистики для месяца
void calculate_monthly_statistics(TemperatureData* data, int record_count, int month) {
    int min_temp = INT_MAX;
    int max_temp = INT_MIN;
    int total_temp = 0;
    int count = 0;

    for (int i = 0; i < record_count; i++) {
        if (data[i].month == month) {
            total_temp += data[i].temperature;
            if (data[i].temperature < min_temp) {
                min_temp = data[i].temperature;
            }
            if (data[i].temperature > max_temp) {
                max_temp = data[i].temperature;
            }
            count++;
        }
    }

    if (count > 0) {
        printf("Monthly statistics for month %d:\n", month);
        printf("Average temperature: %.2f\n", (double)total_temp / count);
        printf("Minimum temperature: %d\n", min_temp);
        printf("Maximum temperature: %d\n", max_temp);
    } else {
        printf("No data for month %d\n", month);
    }
}

// Расчет статистики за год
void calculate_annual_statistics(TemperatureData* data, int record_count) {
    int min_temp = INT_MAX;
    int max_temp = INT_MIN;
    int total_temp = 0;
    int count = 0;

    for (int i = 0; i < record_count; i++) {
        total_temp += data[i].temperature;
        if (data[i].temperature < min_temp) {
            min_temp = data[i].temperature;
        }
        if (data[i].temperature > max_temp) {
            max_temp = data[i].temperature;
        }
        count++;
    }

    if (count > 0) {
        printf("Annual statistics:\n");
        printf("Average temperature: %.2f\n", (double)total_temp / count);
        printf("Minimum temperature: %d\n", min_temp);
        printf("Maximum temperature: %d\n", max_temp);
    } else {
        printf("No data available for the year\n");
    }
}
