CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = talkback.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

talkback: talkback.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o talkback