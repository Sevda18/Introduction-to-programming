#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	int max = num1;
	int min = num1;
	if (max < num2)
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}


	if (min > num2)
	{
		min = num2;
	}
	if (min > num3)
	{
		min = num3;
	}


	int average = num1 + num2 + num3 - max - min;

	std::cout << min<<" "<<average<<" " << max;
}