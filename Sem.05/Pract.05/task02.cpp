#include <iostream>

bool doesContain(int num, int target)
{
	while (num != 0)
	{
		int lastDigit = num % 10;
		if (lastDigit == target)
		{
			return true;
		}
		num /= 10;
	}
	return false;
}

int countPowOfTen(int num)
{
	int count = 1;
	while (num != 1)
	{
		num /= 10;
		count *= 10;
	}

	return count;
}

int removeDigit(int& number, int& target)
{
	if (!doesContain(number, target))
	{
		return -1;
	}

	int start = 0, end = 0, devStart = 0, devEnd = 0;
	int count = 1;
	int copyOfNumber = number;

	while (copyOfNumber != 0)
	{
		int lastDigit = copyOfNumber % 10;
		count *= 10;
		if (lastDigit == target)
		{
			int devEnd = count / 10;
			int devStart = countPowOfTen(number)*10 / devEnd;
		
			start = number / devStart;
			end = number % devEnd;
			int newNumber = start * devStart/10 + end;
			return newNumber;
		}
		copyOfNumber /= 10;
	}
}


int main()
{
	int num, target;
	std::cin >> num >> target;

	std::cout<<removeDigit(num, target);
}

