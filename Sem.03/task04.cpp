#include <iostream>

int main()
{
	unsigned int number;
	std::cin >> number;

	for (unsigned int i = number; i >= 2; i--)
	{
		bool isPrime = true;
		double temp = sqrt(i);
		for (unsigned int k = 2; k <= temp; i++)
		{
			if (i % k == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (!isPrime)
		{
			continue;
		}

		int count = 0;
		while (number % i == 0)
		{
			count++;
			number /= i;
		}

		if (count >= 1)
		{
			std::cout << i;
			std::cout << "^" << count << " ";
		}
	}

	



}