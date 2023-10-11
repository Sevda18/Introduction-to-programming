#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	bool isValid = n >= 2 && n <= 6;

	std::cout << isValid;
}