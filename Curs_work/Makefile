CC = gcc
CFLAGS = -Wall -g

SRC = main.c temp_functions.c
OBJ = main.o temp_functions.o
EXEC = temperature_stats

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c temp_functions.h
	$(CC) $(CFLAGS) -c main.c

temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

clean:
	rm -f $(OBJ) $(EXEC)
