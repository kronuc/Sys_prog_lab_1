#include <string>
#include <ctime>	//змінити тип поля дата остньої поізки з string на tm

class Hotel
{
	public:
	Hotel(int inhotelCode,std::string inName, std::string inCountry, std::string inCity, std::string inAddress, int inAmountOfStars, int inContactNumber);
	~Hotel();
	
	int getHotelCode();
	std::string getName();
	std::string getCountry();
	std::string getCity();
	std::string getAddress();
	int getAmountOfStars();
	int getContactNumber();
	
	void setHotelCode(int inHotelCode);
	void setName(std::string inName);
	void setCountry(std::string CCountry);
	void setCity(std::string inCity);
	void setAddress(std::string inAddress);
	void setAmountOfStars(int inAmountOfStars);
	void setContactNumber(int inContactNumber);
	
	
	private:
	int hotelCode;
	std::string name;
	std::string country;
	std::string city;
	std::string address;
	int amountOfStars;
	int contactNumber;	
}
