#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        print_help();
        return 0;
    }

    char *filename = NULL;
    int month = 0;
    TemperatureData data[10000];
    int record_count = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            print_help();
            return 0;
        } else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            filename = argv[++i];
        } else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[++i]);
        }
    }

    if (!filename) {
        printf("Input file not specified\n");
        return 1;
    }

    record_count = parse_csv_file(filename, data, 10000);
    if (record_count < 0) {
        return 1;
    }

    if (month > 0) {
        calculate_monthly_statistics(data, record_count, month);
    } else {
        calculate_annual_statistics(data, record_count);
    }

    return 0;
}
