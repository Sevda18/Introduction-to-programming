#include <iostream>

int main()
{
	char letter;
	std::cin >> letter;

	bool isVowel = letter == 'a' || letter == 'e' || letter == 'o' || letter == 'i' || letter == 'u';

	std::cout << isVowel << std::endl;

}