#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int product = num1 * num2;
	int lastD = product % 10;
	bool isEven = lastD % 2 == 0;

	std::cout << product << ", " << lastD << " - " << isEven << std::endl;
}