CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = temp.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

temp: temp.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o temp