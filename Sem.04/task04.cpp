#include <iostream>

bool isSuffix(int n, int k)
{
	while (k != 0)
	{
		if (n % 10 == k % 10)
		{
			n /= 10;
			k /= 10;
			continue;
		}
		return false;
	}
	return true;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	std::cout << isSuffix(num1, num2);
}