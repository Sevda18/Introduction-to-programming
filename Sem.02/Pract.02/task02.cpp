#include <iostream>

int main()
{
	char symbol;
	std::cin >> symbol;
	int symbolNumber = symbol;
	
	if (symbol == 'I' || symbol == 'V' || symbol == 'X')
	{
		std::cout << symbolNumber;
	}
	else
	{
		std::cout << "Invalid input.";
	}

	std::cout << std::endl;
	
}