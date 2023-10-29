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
	int result = reverse(num1);
	int result1 = reverse(num2);
	return reverse(result1, result);
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int result = concat(num1, num2);
	std::cout << result;
}
