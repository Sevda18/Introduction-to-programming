#include <iostream>

void minAndMax(int& a, int& b)
{
	int min = a < b ? a : b;
	int max = a > b ? a : b;
	min = a;
	max = b;
}

bool isPrime(int& num)
{
	int temp = sqrt(num);
	for (int i = 2; i <= temp; i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}
	return true;
}

bool isEqualPrimeDev(int& num, int& num2)
{
	int count = 0;
	int target = 2;
	int temp = num;
	while (target != temp+1)
	{
		if (isPrime(num))
		{
			count = 1;
			break;
		}
		if (temp % target == 0 && isPrime(target))
		{
			count++;
			if (temp/target % target == 0)
			{
				return false;
			}
		}
		target++;
	}

	return count == num2 ? true : false;
}

void numbers(int& num1, int& num2, int& num3, int& minInInterval, int& maxInInterval)
{
	int copyOfNum1 = num1;
	int copyOfNum2 = num2;
	int count = 0;
	while (num1!= num2+1)
	{
		if (isEqualPrimeDev(num1, num3))
		{
			count++;
			if (count == 1)
			{
				minInInterval = num1;
			}
			else if (maxInInterval < num1)
			{
				maxInInterval = num1;
			}
		}
		num1++;
	}

	if (count==0)
	{
		minInInterval = copyOfNum1;
		maxInInterval = copyOfNum1;
	}
}

void acceptValue(int& num1, int& num2, int minInInterval, int maxInInterval)
{
	num1 = minInInterval;
	num2 = maxInInterval;
}

int main()
{
	int num1, num2, num3;
	int minInInterval = 0, maxInInterval= 0;
	std::cin >> num1 >> num2 >> num3;
	minAndMax(num1, num2);
	numbers(num1, num2, num3, minInInterval, maxInInterval);
	acceptValue(num1, num2, minInInterval, maxInInterval);
	std::cout << num1 << " " << num2;
}
