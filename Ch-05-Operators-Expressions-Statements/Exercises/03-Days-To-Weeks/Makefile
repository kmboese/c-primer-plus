CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = days_to_weeks.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

days_to_weeks: days_to_weeks.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o days_to_weeks