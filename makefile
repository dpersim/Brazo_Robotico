all: b1

brazoRobotico.o: brazoRobotico.cpp brazoRobotico.h
	g++ -c brazoRobotico.cpp

b1.o: b1.cpp brazoRobotico.h
	g++ -c b1.cpp

b1: b1.o brazoRobotico.o
	g++ -o b1 b1.o brazoRobotico.o

clean:
	rm -f *.o b1

test: all
	./b1
