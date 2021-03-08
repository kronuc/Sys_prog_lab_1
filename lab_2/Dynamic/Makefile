binary: UserInterface.o libHotel.so
	g++ -o binary UserInterface.o -L. -lHotel -Wl,--rpath -Wl,.
UserInterface.o: UserInterface.cpp 
	g++ -c UserInterface.cpp
libHotel.so: Hotel.o Database.o
	g++ -shared -o libHotel.so Hotel.o Database.o
Hotel.o: Hotel.cpp
	g++ -c -fPIC Hotel.cpp
Database.o: Database.cpp
	g++ -c -fPIC Database.cpp
clean:
	rm -f *.o *.so binary
