#include <iostream>

int main()
{
	unsigned int num;
	std::cin >> num;

	bool isPrime = true;
	double temp = sqrt(num);

	for (int i = 2; i <= temp; i++)
	{
		if (num % i == 0)
		{
			isPrime = false;
			break;
		}
	}

	std::cout << (isPrime ? "prime" : "not prime");
}