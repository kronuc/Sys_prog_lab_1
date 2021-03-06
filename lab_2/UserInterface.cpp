#include <iostream>
#include <stdexcept>
#include <string>

#include "database.h"

using namespace std;
using namespace Records;

int displayMenu();
void doStartBusiness(Database &inDB);
void doGoBankrupt(Database &inDB);
void doAddStar(Database &inDB);
void doRemoveStar(Database &inDB);

int main(int argc, char **argv)
{
  Database hotelDB;
  bool done = false;

  while (!done)
  {
    int selection = displayMenu();

    switch (selection)
    {
    case 1:
      doStartBusiness(hotelDB);
      break;
    case 2:
      doGoBankrupt(hotelDB);
      break;
    case 3:
      doAddStar(hotelDB);
      break;
    case 4:
      hotelDB.displayAll();
      break;
    case 5:
      hotelDB.displayCurrent();
      break;
    case 6:
      hotelDB.displayBankrupted();
      break;
    case 0:
      done = true;
      break;
    default:
      cerr << "Unknown command." << endl;
    }
  }
}

int displayMenu()
{
  int selection;

  cout << endl;
  cout << "hotel Database" << endl;
  cout << "-----------------" << endl;
  cout << "1) Add a new hotel" << endl;
  cout << "2) Go to bankrupt an hotel" << endl;
  cout << "3) Add star t0 an hotel" << endl;
  cout << "4) List all hotels" << endl;
  cout << "5) List all current hotels" << endl;
  cout << "6) List all bankrupted hotels" << endl;
  cout << "0) Quit" << endl;
  cout << endl;
  cout << "---> ";

  cin >> selection;

  return selection;
}

void doStartBusiness(Database &inDB)
{
  string name;
  string country;

  cout << "Hotel name? ";
  cin >> name;
  cout << "Location (country)? ";
  cin >> country;

  try
  {
    inDB.addHotel(name, country);
  }
  catch (std::exception ex)
  {
    cerr << "Unable to add new hotel!" << endl;
  }
}

void doGoBankrupt(Database &inDB)
{
  int hotelNumber;

  cout << "Hotel number? ";
  cin >> hotelNumber;

  try
  {
    Hotel &ht = inDB.getHotel(hotelNumber);
    ht.goBankrupt();
    cout << "Hotel " << hotelNumber << " has been gone to bankrupt." << endl;
  }
  catch (std::exception ex)
  {
    cerr << "Unable to go to bankrupt hotel!" << endl;
  }
}

void doAddStar(Database &inDB)
{
  int hotelNumber;
  int raiseAmount;

  cout << "hotel number? ";
  cin >> hotelNumber;

  cout << "How much of a raise? ";
  cin >> raiseAmount;

  try
  {
    Hotel &ht = inDB.getHotel(hotelNumber);
    ht.addStar(raiseAmount);
  }
  catch (...)
  {
    cerr << "Unable to add stars to hotel!" << endl;
  }
}
