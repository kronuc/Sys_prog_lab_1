#include <iostream>
#include "Hotel.h"

namespace Records
{

	const int kMaxHotels = 100;
	const int kFirstHotelNumber = 10;
	class Database
	{
	public:
		Database();
		~Database();

		Hotel &addHotel(std::string inName, std::string inCountry);
		Hotel &getHotel(int inHotelNumber);
		Hotel &getHotel(std::string inName, std::string inCountry);
		void displayAll();
		void displayCurrent();
		void displayBankrupted();

	protected:
		Hotel mHotels[kMaxHotels];
		int mNextSlot;
		int mNextHotelNumber;
	};
}
