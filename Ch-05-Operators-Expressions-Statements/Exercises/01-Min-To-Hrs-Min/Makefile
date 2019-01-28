CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = min_to_hrs.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

min_to_hrs: min_to_hrs.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o min_to_hrs