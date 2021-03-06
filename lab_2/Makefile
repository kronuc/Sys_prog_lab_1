binary: UserInterface.o 
	g++ -o binary UserInterface.o -L. -lHotel
UserInterface.o: UserInterface.cpp libHotel.a
	g++ -c UserInterface.cpp
libHotel.a: Hotel.o
	ar cr libHotel.a Hotel.o
Hotel.o: Hotel.cpp
	g++ -c Hotel.cpp
clean:
	rm -f *.o *.a binary
