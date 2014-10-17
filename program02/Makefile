CC = g++
CFLAGS = -Wall -pedantic 

all:	program02
program02:	main.o program02.o
	$(CC) -o program02 main.o program02.o $(CFLAGS)
program02.o:	program02.cpp program02.h
	$(CC) -o program02.o -c program02.cpp $(CFLAGS)
main.o:	main.cpp program02.h
	$(CC) -o main.o -c main.cpp $(CFLAGS)
clean:
	rm -f *.o 
