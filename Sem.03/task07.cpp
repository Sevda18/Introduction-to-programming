#include <iostream>

int main()
{
	unsigned int number;
	std::cin >> number;

	if (number%2==0)
	{
		++number;
	}

	for (int i = number; i > 0; i-=2)
	{
		int whiteSpaceCount = (number - i) / 2;
		for (int j = 0; j < whiteSpaceCount; j++)
		{
			std::cout << ' ';
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	for (int i = 3; i <= number; i+=2)
	{
		int whiteSpaceCount = (number - i)/2;

		for (int j = 0; j < whiteSpaceCount; j++)
		{
			std::cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}