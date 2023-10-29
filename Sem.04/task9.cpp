#include <iostream>

int findMin(int num)
{
	int min = num % 10;
	num /= 10;
	while (num != 0)
	{
		int lastDigit = num % 10;
		if (min > lastDigit)
		{
			min = lastDigit;
		}
		num /= 10;
	}

	return min;
}

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

int concat(int num1, int num2)
{
	int result = num1;
	int numberToAdd = reverse(num2);
	while (numberToAdd != 0)
	{
		int lastDigit = numberToAdd % 10;
		result = result * 10 + lastDigit;
		numberToAdd /= 10;
	}
	return result;
}

int removeDigit(int num, int target)
{
	int copyOfNum = num;
	int lastDigit = num % 10;
	int count = 10;
	int result = 1;
	while (num != 0)
	{
		if (target == lastDigit)
		{
			if (count == 10)
			{
				copyOfNum /= count;
				return result *= copyOfNum;
			}
			else
			{
				int start = copyOfNum / count;
				int end = (copyOfNum % (count / 10));
				return result *= concat(start, end);
			}
			
		}
		else
		{
			num /= 10;
			lastDigit = num % 10;
			count *= 10;
		}
	}
	return result;
}

int sortedNum(int num)
{
	int result = 0;
	while (num != 0)
	{
		int target = findMin(num);
		result = result * 10 + target;
		num = removeDigit(num, target);
	}
	return result;
}

int main()
{
	int number;
	std::cin >> number;

	int result = sortedNum(number);
	std::cout << result;
}