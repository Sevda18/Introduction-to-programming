#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int min = num1 < num2 ? num1 : num2;

	for (int i = min; i >= 1;i--)
	{
		if (num1 % i == 0 && num2 % i ==0)
		{
			std::cout << i <<" ";
		}
	}
}