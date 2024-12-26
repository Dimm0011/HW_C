#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} TemperatureData;

// Прототипы функций
void print_help();
int parse_csv_file(const char* filename, TemperatureData* data, int max_records);
void calculate_monthly_statistics(TemperatureData* data, int record_count, int month);
void calculate_annual_statistics(TemperatureData* data, int record_count);
int parse_line(char* line, TemperatureData* entry);

#endif // TEMP_FUNCTIONS_H
