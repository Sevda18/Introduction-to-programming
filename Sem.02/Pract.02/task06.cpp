#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (num == 0)
	{
		std::cout << "zero" << std::endl;
	}
	else if (!(num % 2))
	{
		std::cout << "even" << std::endl;
	}
	else
	{
		std::cout << "odd" << std::endl;
	}
}