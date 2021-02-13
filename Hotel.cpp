#include <iostream>
#include "Car.h"

using namespace std;

Hotel(int inhotelCode,std::string inName, std::string inCountry, std::string inCity, std::string inAddress, int inAmountOfStars, int inContactNumber)
{
	hotelCode = inHotelCode;
	name = inName;
	country = inCountry;
	city = inCity;
	address = inAddress;
	amountOfStars = inAmountOfStars;
	contactNumber = inContactNumber;	
}

~Hotel();
	
	int getHotelCode();
	std::string getName();
	std::string getCountry();
	std::string getCity();
	std::string getAddress();
	int getAmountOfStars();
	int getContactNumber();
	
	void setHotelCode(int hotelCode);
	void setName(std::string name);
	void setCountry(std::string country);
	void setCity(std::string city);
	void setAddress(std::string address);
	void setAmountOfStars(int amountOfStars);
	void setContactNumber(int contactNumber);
	
	