#include <iostream>

int reverse(int num, int result = 0)
{
	while (num != 0)
	{
		int lastDigit = num % 10;
		result = result * 10 + lastDigit;
		num /= 10;
	}
	return result;
}

int concat(int num1, int num2)
{
	int newNum = reverse(num2, 0);

	return reverse(newNum, num1);
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int result = concat(num1, num2);
	std::cout << result;
}