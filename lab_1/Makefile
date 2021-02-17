CC=g++
CGLAGS=-c -Wall
LDFLAGS=


all: TravelAgency 

TravelAgency: Hotel.o TravelAgency.o
	$(CC) $(LDFLAGS) Hotel.o TravelAgency.o -o  TravelAgency
	
Hotel.o: Hotel.cpp
	$(CC) $(CFLAGS) -c Hotel.cpp 

TravelAgency.h: TravelAgency.cpp
	$(CC) $(CFLAGS) -c TravelAgency.cpp 
 

clean: 
	rm -rf *.o TravelAgency
