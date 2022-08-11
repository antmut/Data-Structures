main: main.o stack.o
	g++ -o main main.o stack.o

main.o: main.cpp
	g++ -c main.cpp

stack.o: stack.h
	g++ -c stack.h
clean:
	-rm *.o
	-rm *.h.gch


