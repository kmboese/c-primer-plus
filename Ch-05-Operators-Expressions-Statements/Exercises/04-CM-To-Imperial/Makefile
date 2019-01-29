CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = cm_to_imp.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

cm_to_imp: cm_to_imp.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o cm_to_imp