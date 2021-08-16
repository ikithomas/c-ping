# -Wall: tells it to print all warning
# -g: tell it to generate debug information
CFLAGS=-Wall -g

all: ex1 ex3

clean:
	rm -rf ex1 ex3 *.dSYM

recompile: clean all

lint:
	splint *.c -paramuse -redef
