CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = printfFormatting.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

printfFormatting: printfFormatting.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o printfFormatting