#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	int max = num1;
	if (max < num2)
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}

	int min = num1;
	if (min > num2)
	{
		min = num2;
	}
	if (min > num3)
	{
		min = num3;
	}

	int average;
	average = num1 + num2 + num3 - min - max;

	int newNumber = max * 100 + average * 10 + min;
	std::cout<<newNumber;
}