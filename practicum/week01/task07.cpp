#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	bool isInInterval = num1 >= num2 && num1 <= num3;
	std::cout << isInInterval << std::endl;

}