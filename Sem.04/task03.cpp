#include <iostream>

int reverse(int num)
{
	int result = 0;
	while (num != 0)
	{
		int lastDigit = num % 10;
		result = result* 10 + lastDigit;
		num /= 10;
	}
	return result;
}

bool isPalindrom(int num)
{
	return num == reverse(num);
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << reverse(num) << std::endl;
	std::cout<<isPalindrom(num);
}