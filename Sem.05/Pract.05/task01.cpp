#include <iostream>

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	swap(num1, num2);
	std::cout << num1 << num2;
}