CC=gcc
CFLAGS=-g
DEPS =
OBJ = weeksInYear.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

weeksInYear: weeksInYear.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o weeksInYear