#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int min = num1 < num2 ? num1 : num2;
	int max = num1 > num2 ? num1 : num2;

	for (int i = min+1; i < max; i++)
	{
		bool isPrime = true;
		int temp = sqrt(i);
		for (int j = 2; j <= temp; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			std::cout << i << " ";
		}
	}
}