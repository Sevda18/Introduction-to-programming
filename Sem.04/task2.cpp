#include <iostream>

int countDigit(int num)
{
	int count = 0;
	do
	{
		count++;
		num /= 10;
	} while (num != 0);
	return count;
}

int main()
{
	int num;
	std::cin >> num;

	int result = countDigit(num);
	std::cout << result;
}