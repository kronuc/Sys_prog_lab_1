// Database.cpp

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

#include "Database.h"

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
   save();
  }
  Hotel &Database::addHotel(string inName, string inCountry)
  { 
    load();
    if (mNextSlot >= kMaxHotels)
    {
      cerr << "There is enough memory to add the new Hotel!" << endl;
      throw exception();
    }

    Hotel &theHotel = mHotels[mNextSlot++];
    theHotel.setName(inName);
    theHotel.setCountry(inCountry);
    theHotel.setHotelCode(mNextHotelNumber++);
    save();
    return theHotel;
  }
  Hotel &Database::getHotel(int inHotelNumber)
  {
    load();
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
    load();
    for (int i = 0; i < mNextSlot; i++)
    {
      if (mHotels[i].getName() == inName &&
          mHotels[i].getCountry() == inCountry)
      {
        return mHotels[i];
      }
    }

    cerr << "No match with name " << inName << " " << inCountry << endl;
    throw exception();
  }
  
  void Database::displayAll()
  {
    load();
    for (int i = 0; i < mNextSlot; i++)
    {
      mHotels[i].display();
    }
  }

  void Database::displayCurrent()
  {
    load();
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
    load();
    for (int i = 0; i < mNextSlot; i++)
    {
      if (!mHotels[i].isBankrupted())
      {
        mHotels[i].display();
      }
    }
  }
  
  void Database::load()
  {
    string line;
    ifstream in("data.txt");
    if(in.is_open())
    {
    	mNextSlot  = 0;
    	mNextHotelNumber = 0;
    	while (getline(in, line))
    	{
    		mNextHotelNumber++;
    		Hotel hotel;
      		hotel.setDataFromString(line);
      		mHotels[mNextSlot++] = hotel;	
    	}
    }
    in.close();
    
  }

  void Database::save()
  {
  	ofstream clean("data.txt");
  	clean.close();
  	ofstream out("data.txt", std::ios::app);
    	if (out.is_open())
    	{	
        	for (int i = 0; i < mNextSlot; i++)
   		{
			out << mHotels[i].toString() << endl;
		}
    }
    out.close();
  }
}
