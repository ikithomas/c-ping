# -Wall: tells it to print all warning
# -g: tell it to generate debug information
CFLAGS=-Wall -g
CC=cc

TARGETS := $(shell find src -name "*.c" | sed 's/\.c//')

all: $(TARGETS)

.c:
	$(CC) $(CFLAGS) $< -o $(shell echo $< | sed s/src/artifacts/ | sed 's/\.c//')

debug:
	@echo $(TARGETS)

clean:
	rm -r artifacts/*

recompile: clean all
