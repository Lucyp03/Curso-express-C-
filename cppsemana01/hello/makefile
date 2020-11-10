hello: hello.o
	g++ -Wall hello.o -o hello

hello.o: hello.cpp
	g++ -Wall -o hello.o -c hello.cpp

.PHONY: clean
clean:
	rm hello.o hello
