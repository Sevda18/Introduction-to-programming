#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	bool isPow = true;
	while (number != 1)
	{
		if (number % 2 == 0)
		{
			number /= 2;
		}
		else
		{
			std::cout << "no";
			isPow = false;
			break;
		}
	}

	if (isPow)
	{
		std::cout << "yes";
	}

	
}