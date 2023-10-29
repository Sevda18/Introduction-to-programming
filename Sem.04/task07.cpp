#include <iostream>

int power(int num1, int num2)
{
	int result = num1;
	if (num2 == 0)
	{
		result = 1;
	}
	for (int i = 2; i <= num2; i++)
	{
		result *= num1;
	}

	return result;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int result = power(num1, num2);
	std::cout << result;
}