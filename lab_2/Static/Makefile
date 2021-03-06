binary: UserInterface.o libHotel.a
	g++ -o binary UserInterface.o -L. -lHotel
UserInterface.o: UserInterface.cpp 
	g++ -c UserInterface.cpp
libHotel.a: Hotel.o Database.o
	ar cr libHotel.a Hotel.o Database.o
Hotel.o: Hotel.cpp
	g++ -c Hotel.cpp
Database.o: Database.cpp
	g++ -c Database.cpp
clean:
	rm -f *.o *.a binary
