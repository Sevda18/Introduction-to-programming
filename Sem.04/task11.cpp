#include <iostream>

char returnLetter(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		return symbol -= 32;
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		return symbol += 32;
	}
	else
	{
		return symbol;
	}
}

int main()
{
	char symbol;
	std::cin >> symbol;

	char result = returnLetter(symbol);
	std::cout << result;
}