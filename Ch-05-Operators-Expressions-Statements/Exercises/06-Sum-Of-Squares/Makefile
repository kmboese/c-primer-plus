CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = sum_of_squares.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sum_of_squares: sum_of_squares.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o sum_of_squares