CC = g++
CFLAGS = -Wall -pedantic 

all:	program01 clean
program01:	main.o program01.o
	$(CC) -o program01 main.o program01.o $(CFLAGS)
program01.o:	program01.cpp program01.h
	$(CC) -o program01.o -c program01.cpp $(CFLAGS)
main.o:	main.cpp program01.h
	$(CC) -o main.o -c main.cpp $(CFLAGS)
clean:
	rm -f *.o 
