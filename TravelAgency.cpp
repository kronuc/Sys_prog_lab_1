#include <iostream>
#include "Hotel.h"
using std::string;

using namespace std;

int main(int argc, char **argv)
{
	Hotel hotel_01; // stack-based Hotel
	hotel_01.setName("hotel 01");
	hotel_01.setHotelCode(010101);
	hotel_01.setCountry("Ukraine");
	hotel_01.setCity("Lutsk");
	hotel_01.setAddress("GPZ");
	hotel_01.setAmountOfStars(1);
	hotel_01.setContactNumber(473856);
	string hotel_01Info = hotel_01.getHotelShortInfo();
	cout << hotel_01Info << endl;
	cout << "Top hotel: " << hotel_01.isTop() << endl;
	cout << "" << endl;

	Hotel *hotel_02;		// heap-based Hotel
	hotel_02 = new Hotel(); // allocate a new object
	hotel_02->setName("hotel 02");
	hotel_02->setHotelCode(010102);
	hotel_02->setCountry("USA");
	hotel_02->setCity("California");
	hotel_02->setAddress("Silicon valley");
	hotel_02->setAmountOfStars(5);
	hotel_02->setContactNumber(473836);
	string hotel_02Info = hotel_02->getHotelShortInfo();
	cout << hotel_02Info << endl;
	cout << "Top hotel: " << hotel_02->isTop() << endl;
	delete hotel_02;
	return 0;
}
