CC=gcc
CFLAGS=-g
DEPS =
OBJ = rhodium.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

rhodium: rhodium.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o rhodium