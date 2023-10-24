#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	if (num1<num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	while (num2!=0)
	{
		int newNum = num1 % num2;
		num1 = num2;
		num2 = newNum;
	}

	std::cout << num1;
}