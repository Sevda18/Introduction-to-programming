#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (num < 100)
	{
		std::cout << "Less than 100" << std::endl;
	}
	else if (num >= 100 && num <= 200)
	{
		std::cout << "Between 100 and 200" << std::endl;
	}
	else
	{
		std::cout << "Greater than 200" << std::endl;
	}
}