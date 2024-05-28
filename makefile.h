CC = g++
CFLAGS = -Wall - std = c++11
LDFLAGS = -lncurses

all : main

main : main.o
$(CC) $(CFLAGS) - o $@ $ ^ $(LDFLAGS)

main.o: main.cpp
$(CC) $(CFLAGS) - c - o $@ $ <

    clean:
rm - f main * .o
