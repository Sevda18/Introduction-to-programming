#include <iostream>

int main()
{
	char letter;
	std::cin >> letter;

	if (letter >= 'a' && letter <= 'z')
	{
		char newLetter = letter - 32;
		std::cout << newLetter;
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		char newLetter = letter + 32;
		std::cout << newLetter;
	}
	else
	{
		std::cout << "It's not a letter.";
	}

}