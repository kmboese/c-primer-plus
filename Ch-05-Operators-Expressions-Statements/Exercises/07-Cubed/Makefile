CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = cubed.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

cubed: cubed.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o cubed