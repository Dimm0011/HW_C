#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Для функции getopt
#include <getopt.h> // Для getopt в Windows

#include "temp_api.h"

int main(int argc, char *argv[]) {
    int opt;
    char *filename = NULL;
    int month = -1;

    // Обработка аргументов командной строки
    while ((opt = getopt(argc, argv, "hf:m:")) != -1) {
        switch (opt) {
            case 'h':
                printf("Usage: \n");
                printf("-h: Display help message\n");
                printf("-f: Input CSV file for processing\n");
                printf("-m: Month number for statistics\n");
                break;
            case 'f':
                filename = optarg;
                printf("Input file: %s\n", filename);
                break;
            case 'm':
                month = atoi(optarg);
                printf("Month number: %d\n", month);
                break;
            default:
                fprintf(stderr, "Usage: %s [-h] [-f filename] [-m month]\n", argv[0]);
                exit(EXIT_FAILURE);
        }
    }

    // Пример создания массива температурных записей
    TemperatureRecord records[] = {
        {2024, 1, 1, 12, 0, -5},
        {2024, 1, 15, 14, 30, 2},
        {2024, 2, 10, 10, 0, -7},
        {2024, 2, 20, 16, 15, 0},
        {2024, 3, 5, 9, 0, 6},
        {2024, 3, 25, 18, 30, 10},
        {2024, 12, 31, 23, 59, -10}
    };

    int record_count = sizeof(records) / sizeof(records[0]);

    if (month != -1) {
        // Статистика за месяц
        printf("Average temperature in month %d: %.2f\n", month, average_month_temperature(records, record_count, month));
        printf("Min temperature in month %d: %d\n", month, min_month_temperature(records, record_count, month));
        printf("Max temperature in month %d: %d\n", month, max_month_temperature(records, record_count, month));
    }

    // Статистика за год
    printf("Average temperature for the year: %.2f\n", average_year_temperature(records, record_count));
    printf("Min temperature for the year: %d\n", min_year_temperature(records, record_count));
    printf("Max temperature for the year: %d\n", max_year_temperature(records, record_count));

    return 0;
}
