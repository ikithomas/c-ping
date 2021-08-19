# -Wall: tells it to print all warning
# -g: tell it to generate debug information
CFLAGS=-Wall -g

all: ex1 ex3 ex7

clean:
	rm -rf ex1 ex3 ex7 *.dSYM

recompile: clean all

lint:
	splint *.c -paramuse -redef
