# Catalogue

- ex1: Hello world
- ex3: struct, typedef, and enum
- ex7: Data type
- ex8: if, else, for
- ex9: while
- ex10: List of strings


# Instruction

This repository will walk through how to implement a simple ping in `c`.

```bash
# Build a program started with ex1
make ex1

# Report all warning
CFLAG="=Wall" make ex1

# C linter
splint ex3.c -paramuse
```

# GDB References
gdb is on Linux, nearly the same thing as LLDB. i.e. This will not work on Mac.


# LLDB References

(See https://lldb.llvm.org/use/map.html for more.)

lldb is a shell for running your program under the debugger, basically the same thing as GDB. If you are on Mac, use LLDB>

To enter the LLDB shell and load the executable `ex3`
```bash
lldb ex3

# attach to a pid
lldb -p 18770
```

Commands in `lldb`

```bash
# print out all commands
help

# run the loaded program
run

# set a breakpoint in the function main
# it break before the execution of that line
breakpoint set --name main

# where expr is an expression (e.g. variable)
print expr

# next expression
next

# similar to next, but it steps into the function call if there is one
step

# backtrace of the current calling stack
bt

# attach to a running process (it can even be a non C program!)
attach -p pid

# detach from attach
detach

# continue after the breakpoint
continue

# list the next 10 lines of source code
list

# list the previous 10 lines of source code
lsit -
```