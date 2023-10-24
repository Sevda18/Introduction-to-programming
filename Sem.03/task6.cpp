#include <iostream>

int main()
{
	int num1, num2, num3, num4, num5;
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	for (int x = -100; x < 100; x++)
	{	
		int result = num1 * x * x * x * x + num2 * x * x * x + num3 * x * x + num4 * x + num5;
		if (result >= 0)
		{
			std::cout << x << " ";
		}
	}
}