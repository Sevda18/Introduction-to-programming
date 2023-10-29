#include <iostream>

int returnDigit(char symbol)
{
	if (symbol == 1 || symbol == 2 || symbol == 3 || symbol == 4 || symbol == 5 || symbol == 6 || symbol == 7 || symbol == 8 || symbol == 9 || symbol == 0)
	{
		return symbol;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char symbol;
	std::cin >> symbol;

	int result = returnDigit(symbol);
	std::cout << result;
}
