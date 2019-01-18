CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = showf_pt.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

showf_pt: showf_pt.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o showf_pt