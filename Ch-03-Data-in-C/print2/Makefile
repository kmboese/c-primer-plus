CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = print2.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

print2: print2.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o print2