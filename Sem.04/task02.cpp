#include <iostream>

int reverse(int num)
{
	int result = 0;
	while (num != 0)
	{
		int lastDigit = num % 10;
		result = result * 10 + lastDigit;
		num /= 10;
	}
	return result;
}

int main()
{
	int number;
	std::cin >> number;

	int reverseNumber = reverse(number);
	std::cout << reverseNumber;
}