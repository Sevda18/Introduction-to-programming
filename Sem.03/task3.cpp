#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	int copyOfNumber = number;
	int countDigit= 0;
	while (copyOfNumber != 0)
	{
		copyOfNumber /= 10;
		countDigit++;
	}

	int power = 1;
	for (int i = 1; i <= countDigit/2; i++)
	{
		power *= 10;
	}

	if (countDigit == 2 || countDigit == 1)
	{
		std::cout << 0 << std::endl;
		std::cout << 1;
	}

	else if (countDigit%2==0)
	{
		int firstDigit =  (number / power) % 10;
		int secondDigit =  (number % power) / 10;
		int output = firstDigit * 10 + secondDigit;
		std::cout << output << std::endl;
		std::cout << output + 1 << std::endl;
	}
	else
	{
		int output = (number / power) % 10;
		std::cout << output<< std::endl;
		std::cout << output + 1 << std::endl;
	}
	
}