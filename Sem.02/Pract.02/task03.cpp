#include <iostream>

int main()
{
	unsigned year;
	std::cin >> year;

	if (year %4 == 0  && year % 100 != 0 || year % 400== 0)
	{
		std::cout << "Leap year" << std::endl;
	}
	else
	{
		std::cout << "Normal year" << std::endl;
	}

}