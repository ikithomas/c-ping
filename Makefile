# -Wall: tells it to print all warning
# -g: tell it to generate debug information
CFLAGS=-Wall -g

executables := $(shell ls | grep .c | sed s/.c//)

all: $(executables)

clean:
	rm -rf $(executables) *.dSYM

recompile: clean all

lint:
	splint *.c -paramuse -redef
