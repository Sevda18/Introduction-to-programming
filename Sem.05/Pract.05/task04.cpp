#include <iostream>

void reverse(int& a)
{
	int result = 0;
	while (a != 0)
	{
		int lastDigit = a % 10;
		result = result * 10 + lastDigit;
		a /= 10;
	}

	a = result;
}

int powerOfTen(int& target)
{
	int power = 1;

	for (int i = 1; i <= target; i++)
	{
		power *= 10;
	}

	return power;
}

int takeDigit(int& num, int& target)
{
	int power = powerOfTen(target);
	int digit = (num % power) / 10;

	return digit;
}

void transform(int& num1, int& num2, int& target)
{
	int digitFirst = takeDigit(num1, target);
	int digitSecond = takeDigit(num2, target);

	int diff = digitFirst - digitSecond;
	if (diff < 0)
	{
		diff = -diff;
	}

	if (digitFirst < digitSecond)
	{
		num1 += (diff * powerOfTen(target)/10);
		num2 -= (diff * powerOfTen(target)/10);
	}
	else
	{
		num1 -= (diff * powerOfTen(target)/10);
		num2 += (diff * powerOfTen(target)/10);
	}

	reverse(num1);
	reverse(num2);
}

int main()
{
	int num1, num2, target;
	std::cin >> num1 >> num2 >> target;

	reverse(num1);
	reverse(num2);
	transform(num1, num2, target);

	std::cout << num1 << " " << num2;
}



