all: main.cpp LinkedList.h
	g++ main.cpp LinkedList.h -o main

clean:
	rm -rf *.o *.gch main
