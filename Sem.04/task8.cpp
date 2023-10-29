#include <iostream>

bool isSameNumber(int num)
{
	int lastDigit = num % 10;
	num /= 10;
	while (num != 0)
	{
		if (lastDigit == num % 10)
		{
			num /= 10;
		}
		else
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << isSameNumber(num) << std::endl;
}