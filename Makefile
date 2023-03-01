CXXFLAGS +=-std=c++11

main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: funcs.o tests.o
	g++ -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o