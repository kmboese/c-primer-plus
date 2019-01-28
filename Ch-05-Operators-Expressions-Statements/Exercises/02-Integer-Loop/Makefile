CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = int_loop.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

int_loop: int_loop.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o int_loop