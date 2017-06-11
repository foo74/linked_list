all: main
	gcc main.o -Wall -g -o main

main: main.c main.h
	gcc main.c -c -Wall -g

run:
	./main

debug:
	gdb main

clean:
	rm main main.o
