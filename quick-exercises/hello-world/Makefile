CC=gcc
CFLAGS=-I.
DEPS =
OBJ = helloWorld.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

helloWorld: helloWorld.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o helloWorld