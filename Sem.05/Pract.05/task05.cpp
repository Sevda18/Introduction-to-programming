#include <iostream>

void reverse(int& num)
{
	int result = 0;
	while (num != 0)
	{
		int lastDigit = num % 10;
		result = result * 10 + lastDigit;
		num /= 10;
	}

	num = result;
}

int countDigit(int num)
{
	int count = 0;
	if (num == 0)
	{
		return count = 1;
	}

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return count;
}

int takeEven(int num)
{
	int result = 0;
	int lastDigit = 0;
	int count = 0;
	
	if (countDigit(num) % 2 == 0)
	{
		while (num >= 9)
		{
			lastDigit = num % 10;
			result = result * 10 + lastDigit;
			num /= 100;
		}

		reverse(result);
		return result;
	}
	else
	{
		num /= 10;
		while (num >= 9)
		{
			lastDigit = num % 10;
			result = result * 10 + lastDigit;
			num /= 100;
		}

		reverse(result);
		return result;
	}
}

int takeOdd(int num)
{
	int result = 0;
	int lastDigit = 0;
	int count = 0;
	reverse(num);

	if (countDigit(num) % 2 == 0)
	{
		while (num >= 9)
		{
			lastDigit = num % 10;
			result = result * 10 + lastDigit;
			num /= 100;
		}
		return result;
	}
	else
	{
		while (num != 0)
		{
			lastDigit = num % 10;
			result = result * 10 + lastDigit;
			num /= 100;
		}
		return result;
	}
}

int main()
{
	int num;
	std::cin >> num;

	int num1 = takeEven(num);
	int num2 = takeOdd(num);

	std::cout << num1 <<" "<< num2;
}

