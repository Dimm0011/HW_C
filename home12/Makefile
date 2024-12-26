# Компилятор
CC = gcc

# Флаги компилятора
CFLAGS = -Wall -std=c99

# Исполняемый файл
TARGET = temp_app

# Исходные файлы
SRCS = main.c temp_api.c

# Объектные файлы
OBJS = $(SRCS:.c=.o)

# Правило для сборки исполняемого файла
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Правило для компиляции исходников в объектные файлы
%.o: %.c temp_api.h
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка промежуточных файлов
clean:
	rm -f $(OBJS) $(TARGET)

# Правило по умолчанию (если ничего не указано)
all: $(TARGET)
