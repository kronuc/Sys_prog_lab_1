all: runner

runner: UserInterface.o Database.o
	g++ -o binary UserInterface.o Database.o -L. -lHotel
UserInterface.o: UserInterface.cpp libHotel.a
	g++ -c UserInterface.cpp
libHotel.a: Hotel.o
	ar cr libHotel.a Hotel.o
Hotel.o: Hotel.cpp
	g++ -c Hotel.cpp
Database.o: Database.cpp
	g++ -c Database.cpp
clean:
	rm -f *.o *.a binary
