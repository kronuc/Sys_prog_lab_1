#include <iostream>
#include "Car.h"

using namespace std;

Hotel::Hotel(int inhotelCode,std::string inName, std::string inCountry, std::string inCity, std::string inAddress, int inAmountOfStars, int inContactNumber)
{
	hotelCode = inHotelCode;
	name = inName;
	country = inCountry;
	city = inCity;
	address = inAddress;
	amountOfStars = inAmountOfStars;
	contactNumber = inContactNumber;	
}

Hotel::~Hotel(){}
	
int Hotel::getHotelCode()
{
	return hotelCode;
}

std::string Hotel::getName()
{
	return name;
}

std::string Hotel::getCountry()
{
	return country;
}

std::string Hotel::getCity()
{
	return city;
}

std::string Hotel::getAddress()
{
	return address;
}
int Hotel::getAmountOfStars()
{
	return amountOfStars;
}

int Hotel::getContactNumber();
{
	return contactNumber;
}

void Hotel::setHotelCode(int hotelCode);
void Hotel::setName(std::string name);
void Hotel::setCountry(std::string country);
void Hotel::setCity(std::string city);
void Hotel::setAddress(std::string address);
void Hotel::setAmountOfStars(int amountOfStars);
void Hotel::setContactNumber(int contactNumber);
	
	