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

bool isPrefix(int n, int k)
{
	while (k != 0)
	{
		if (n%10 != k%10)
		{
			return false;
			break;
		}
		n /= 10;
		k /= 10;
	}
	return true;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	std::cout << isPrefix(reverse(num1),reverse(num2));
}
