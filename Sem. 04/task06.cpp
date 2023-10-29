#include <iostream>

bool infix(int a, int k)
{
	while (a != 0)
	{
		if (a%10 != k %10)
		{
			a /= 10;
		}
		else
		{
			a /= 10;
			k /= 10;
		}
	}

	if (k == 0)
	{
		return true;
	}

	return false;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	std::cout << infix(num1, num2);
}