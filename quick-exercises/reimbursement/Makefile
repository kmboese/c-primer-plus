CC=gcc
CFLAGS=-g -Wall
DEPS =
OBJ = reimbursement.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

reimbursement: reimbursement.o
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o reimbursement