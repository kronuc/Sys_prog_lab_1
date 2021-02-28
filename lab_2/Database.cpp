// Database.cpp

#include <iostream>
#include <stdexcept>
#include <string>

#include "database.h"

using namespace std;

namespace Records
{

  Database::Database()
  {
    mNextSlot = 0;
    mNextHotelNumber = kFirstHotelNumber;
  }
  Database::~Database()
  {
  }
  Hotel &Database::addHotel(string inName, string inCountry)
  {
    if (mNextSlot >= kMaxHotels)
    {
      cerr << "There is enough memory to add the new Hotel!" << endl;
      throw exception();
    }

    Hotel &theHotel = mHotels[mNextSlot++];
    theHotel.setName(inName);
    theHotel.setCountry(inCountry);
    theHotel.setHotelCode(mNextHotelNumber++);

    return theHotel;
  }
  Hotel &Database::getHotel(int inHotelNumber)
  {
    for (int i = 0; i < mNextSlot; i++)
    {
      if (mHotels[i].getHotelCode() == inHotelNumber)
      {
        return mHotels[i];
      }
    }

    cerr << "No Hotel with Hotel number " << inHotelNumber << endl;
    throw exception();
  }

  Hotel &Database::getHotel(string inName, string inCountry)
  {
    for (int i = 0; i < mNextSlot; i++)
    {
      if (mHotels[i].getName() == inName &&
          mHotels[i].getCountry() == inCountry)
      {
        return mHotels[i];
      }
    }

    cerr << "No match with name " << inFirstName << " " << inLastName << endl;
    throw exception();
  }
  void Database::displayAll()
  {
    for (int i = 0; i < mNextSlot; i++)
    {
      mHotels[i].display();
    }
  }

  void Database::displayCurrent()
  {
    for (int i = 0; i < mNextSlot; i++)
    {
      if (!mHotels[i].isBankrupted())
      {
        mHotels[i].display();
      }
    }
  }

  void Database::displayBankrupted()
  {
    for (int i = 0; i < mNextSlot; i++)
    {
      if (!mHotels[i].isBankrupted())
      {
        mHotels[i].display();
      }
    }
  }
}
