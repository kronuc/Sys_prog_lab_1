#include <iostream>
#include "Hotel.h"

using namespace std;

Hotel::Hotel(int inHotelCode,std::string inName, std::string inCountry, std::string inCity, std::string inAddress, int inAmountOfStars, int inContactNumber)
{
	hotelCode = inHotelCode;
	name = inName;
	country = inCountry;
	city = inCity;
	address = inAddress;
	amountOfStars = inAmountOfStars;
	contactNumber = inContactNumber;	
}

Hotel::Hotel()
{}

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

int Hotel::getContactNumber()
{
	return contactNumber;
}

void Hotel::setHotelCode(int inHotelCode)
{
	hotelCode = inHotelCode;
}

void Hotel::setName(std::string inName)
{
	name = inName;
}

void Hotel::setCountry(std::string inCountry)
{
	country = inCountry;
}

void Hotel::setCity(std::string inCity)
{
	city = inCity;
}

void Hotel::setAddress(std::string inAddress)
{
	address = inAddress;
}

void Hotel::setAmountOfStars(int inAmountOfStars)
{
	amountOfStars = inAmountOfStars;
}

void Hotel::setContactNumber(int inContactNumber)
{
	contactNumber = inContactNumber;
}
	
