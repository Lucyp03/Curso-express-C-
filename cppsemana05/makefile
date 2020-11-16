CC= g++
CFLAGS= -std=c++11 -Wall

objects= vector3d.o u.o
executable= u

$(executable): $(objects)
	$(CC) $(CFLAGS) -o $(executable) $(objects)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	rm $(objects) $(executable)
