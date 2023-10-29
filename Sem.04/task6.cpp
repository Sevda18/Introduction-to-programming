#include <iostream>

bool isPrime(int num)
{
	int temp = sqrt(num);
	for (int i = 2; i <= temp; i++)
	{
		if (num % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int countDevision(int num)
{
	int count = 0;
	for (int i = 2; i <= num; i++)
	{
		if (isPrime(i) && num % i == 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	int count = 0;
	for (int i = a; i <= b; i++)
	{
		if (countDevision(i) == c)
		{
			count++;
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;
	std::cout << count;
	return 0;
}
