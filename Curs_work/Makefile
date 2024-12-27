CC = gcc
CFLAGS = -Wall -g
OBJFILES = report.o temp_functions.o
EXEC = report.exe

$(EXEC): $(OBJFILES)
	$(CC) $(OBJFILES) -o $(EXEC)

report.o: report.c temp_functions.h
	$(CC) $(CFLAGS) -c report.c

temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

clean:
	rm -f $(OBJFILES) $(EXEC)
