#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int max = num1 > num2 ? num1 : num2;

	while (max % num1 != 0 || max % num2 != 0)
	{
		max++;
	}

	std::cout << max;
}