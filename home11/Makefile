# Makefile

CC = gcc
CFLAGS = -Wall -g
OBJECTS = main.o temp_api.o
EXEC = temp_app

# Правило для компиляции
$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJECTS)

# Правило для компиляции main.o
main.o: main.c temp_api.h
	$(CC) $(CFLAGS) -c main.c

# Правило для компиляции temp_api.o
temp_api.o: temp_api.c temp_api.h
	$(CC) $(CFLAGS) -c temp_api.c

# Очистка промежуточных файлов
clean:
	rm -f $(OBJECTS) $(EXEC)
