#include <iostream>

bool isPrime(int a)
{
	int temp = sqrt(a);
	for (int i = 2; i <= temp; i++)
	{
		if (a % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}



int main()
{
	int num;
	std::cin >> num;

	int count = 0;
	for (int i = 6; count <= num; i++)
	{
		int firstNum = i - 1;
		int secondNum = i + 1;

		if (isPrime(firstNum) && isPrime(secondNum))
		{
			std::cout << firstNum << " " << secondNum << std::endl;
			count++;
		}
	}
}