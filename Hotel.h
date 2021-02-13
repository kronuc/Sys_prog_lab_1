#include <string>
#include <ctime>	//змінити тип поля дата остньої поізки з string на tm

class Hotel
{
	public:
	Hotel();
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
	
	
	private:
	int hotelCode;
	std::string name;
	std::string country;
	std::string city;
	std::string address;
	int amountOfStars;
	int contactNumber;	
}