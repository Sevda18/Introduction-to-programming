#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	int firstDigit = number / 1000;
	std::cout << firstDigit<<std::endl;
	int secondDigit = (number / 100) % 10;
	std::cout << secondDigit << std::endl;
	int thirdDigit = (number % 100)/10;
	std::cout << thirdDigit << std::endl;
	int forthDigit = number % 10;
	std::cout << forthDigit << std::endl;

	int num1 = firstDigit * 10 + forthDigit;
	int num2 = secondDigit * 10 + thirdDigit;
	
	int min = num1;
	if (min > num2)
	{
		min = num2;
	}

	int max = num1 + num2 - min;

	std::cout<<min<< " < " <<max;
}