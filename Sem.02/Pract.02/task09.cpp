#include <iostream>

int main()
{
	int date, month, year;
	std::cin >> date >> month >> year;


	bool isLeapYear = false;

	if (!(year%4) && year%100 || !(year%400))
	{
		isLeapYear = true;
	}

	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (date >= 32)
		{
			std::cout << "invalid date" << std::endl;
			return 0;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (date >= 31)
		{
			std::cout << "invalid date" << std::endl;
			return 0;
		}
	}

	else if (month == 2 && isLeapYear && date >= 30)
	{
		std::cout << "invalid date" << std::endl;
		return 0;
	}
	else if (month == 2 && !isLeapYear && date >= 29)
	{
		std::cout << "invalid date" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Invalid date.";
		return 0;
	}
		std::cout << "Valid date";

}