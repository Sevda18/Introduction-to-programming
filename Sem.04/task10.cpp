#include <iostream>

bool isLetter(char symbol)
{
	if (symbol >= 'a' && symbol <='z')
	{
		return true;
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char symbol;
	std::cin >> symbol;

	std::cout << isLetter(symbol);
}