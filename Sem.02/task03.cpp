#include <iostream>

int main()
{
	double speed;
	std::cin >> speed;

	if (speed < 10)
	{
		std::cout << "slow" << std::endl;
	}
	else if (speed >= 10 && speed <= 50)
	{
		std::cout << "average" << std::endl;
	}
	else if (speed < 50 && speed <= 150)
	{
		std::cout << "fast" << std::endl;
	}
	else if (speed < 150 && speed <= 1000)
	{
		std::cout << "ultra fast" << std::endl;
	}
	else
	{
		std::cout << "extremely fast" << std::endl;
	}
}