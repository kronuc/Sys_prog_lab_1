#include <iostream>
#include "Hotel.h"
using std::string;

using namespace std;

Hotel::Hotel(int inHotelCode, string inName, string inCountry, string inCity, string inAddress, int inAmountOfStars, int inContactNumber)
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
{
}

Hotel::~Hotel() {}

int Hotel::getHotelCode()
{
	return hotelCode;
}

string Hotel::getName()
{
	return name;
}

string Hotel::getCountry()
{
	return country;
}

string Hotel::getCity()
{
	return city;
}

string Hotel::getAddress()
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

string Hotel::getHotelShortInfo()
{
	return "Hotel: " + name + '\n' + "Country: " + country + '\n' + "City: " + city + '\n' + "Address: " + address;
}

string Hotel::isTop()
{
	if (amountOfStars >= 5)
	{
		return "Yes";
	}
	return "No";
}

void Hotel::setHotelCode(int inHotelCode)
{
	hotelCode = inHotelCode;
}

void Hotel::setName(string inName)
{
	name = inName;
}

void Hotel::setCountry(string inCountry)
{
	country = inCountry;
}

void Hotel::setCity(string inCity)
{
	city = inCity;
}

void Hotel::setAddress(string inAddress)
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
