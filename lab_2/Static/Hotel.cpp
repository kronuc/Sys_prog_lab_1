#include <iostream>
#include "Hotel.h"
using std::string;

using namespace std;

Hotel::Hotel(int inHotelCode,
			 string inName,
			 string inCountry,
			 string inCity,
			 string inAddress,
			 int inAmountOfStars,
			 int inContactNumber,
			 bool inBankrupted = false)
{
	hotelCode = inHotelCode;
	name = inName;
	country = inCountry;
	city = inCity;
	address = inAddress;
	amountOfStars = inAmountOfStars;
	contactNumber = inContactNumber;
	isGoBankrupted = inBankrupted;
}

Hotel::Hotel()
{
}

Hotel::~Hotel() {}

void Hotel::addStar(int starsAmount)
{
	setAmountOfStars(getAmountOfStars() + starsAmount);
}

void Hotel::removeStar(int starsAmount)
{
	setAmountOfStars(getAmountOfStars() - starsAmount);
}

void Hotel::goBankrupt()
{
	isGoBankrupted = true;
}

void Hotel::startBusiness()
{
	isGoBankrupted = false;
}

bool Hotel::isBankrupted()
{
	return isGoBankrupted;
}

void Hotel::display()
{
	cout << "Hotel: " << getName() << endl;
	cout << "-------------------------" << endl;
	cout << "Location: " << getCountry() + ", " + getCity() << endl;
	cout << "Hotel code: " << getHotelCode() << endl;
	cout << "Stars: " << getAmountOfStars() << endl;
	cout << "Top: " << isTop() << endl;
	cout << "Contact Number: " << getAmountOfStars() << endl;
	cout << "Address: " << getAddress() << endl;
	cout << endl;
	cout << toString() << endl;
}

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

string Hotel::toString()
{
	return "--(name)--" + name + 
		"--(hotel code)--" + to_string(hotelCode) +
		"--(country)--" + country +
		"--(city)--" + city +
		"--(address)--" + address +
		"--(amount of stars)--" + to_string(amountOfStars) +
		"--(contact number)--" + to_string(contactNumber) +
		"--(is bankrupted)--" + to_string(isGoBankrupted); 
}
void Hotel::setDataFromString(string row)
{
	name = row.substr(row.find("--(name)--") + 10, row.find("--(hotel code)--") - row.find("--(name)--") - 10);
	hotelCode = stoi(row.substr(row.find("--(hotel code)--") + 16, row.find("--(country)--") - row.find("--(hotel code)--") - 16),0 , 10);
	country = row.substr(row.find("--(country)--") + 13, row.find("--(city)--") - row.find("--(country)--") - 13);
	city = row.substr(row.find("--(city)--") + 10, row.find("--(address)--") - row.find("--(city)--") - 10);
	address = row.substr(row.find("--(address)--") + 13, row.find("--(amount of stars)--") - row.find("--(address)--") - 13);
	amountOfStars = stoi(row.substr(row.find("--(amount of stars)--") + 21, row.find("--(contact number)--") - row.find("--(amount of stars)--") - 21),0 , 10);
	contactNumber = stoi(row.substr(row.find("--(contact number)--") + 20, row.find("--(city)--") - row.find("--(contact number)--") - 20),0 , 10);
	isGoBankrupted = toBool(row.substr(row.find("--(is bankrupted)--") + 19, row.size() - row.find("--(is bankrupted)--") - 19));
}

bool Hotel::toBool(string row)
{
	if (row != "0") { return true; }
	else {return false;}
}
