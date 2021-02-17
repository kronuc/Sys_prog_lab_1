#include <string>
#include <ctime> //змінити тип поля дата остньої поізки з string на tm
using std::string;
class Hotel
{
public:
	Hotel(int inhotelCode, string inName, string inCountry, string inCity, string inAddress, int inAmountOfStars, int inContactNumber);
	Hotel();

	~Hotel();

	int getHotelCode();
	string getName();
	string getCountry();
	string getCity();
	string getAddress();
	int getAmountOfStars();
	int getContactNumber();
	string getHotelShortInfo();
	string isTop();

	void setHotelCode(int inHotelCode);
	void setName(string inName);
	void setCountry(string CCountry);
	void setCity(string inCity);
	void setAddress(string inAddress);
	void setAmountOfStars(int inAmountOfStars);
	void setContactNumber(int inContactNumber);

private:
	int hotelCode;
	string name;
	string country;
	string city;
	string address;
	int amountOfStars;
	int contactNumber;
};
