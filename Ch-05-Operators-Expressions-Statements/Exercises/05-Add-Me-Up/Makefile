CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = add_me_up.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

add_me_up: add_me_up.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o add_me_up