#include <iostream>

bool isSortedUp(int num)
{
	int lastDigit = num % 10;
	num /= 10;
	while (num != 0)
	{
		if (lastDigit >= num % 10)
		{
			lastDigit = num % 10;
			num /= 10;
		}
		else
		{
			return false;
		}
	}

	return true;
}

bool isSortedDown(int num)
{
	int lastDigit = num % 10;
	num /= 10;
	while (num != 0)
	{
		if (lastDigit <= num % 10)
		{
			lastDigit = num % 10;
			num /= 10;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int num;
	std::cin >> num;

	if (isSortedUp(num) || isSortedDown(num))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}