CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = altnames.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

altnames: altnames.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o altnames