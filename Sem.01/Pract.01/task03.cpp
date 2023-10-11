#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	bool isDev = num1 % num2 == 0;

	std::cout << isDev << std::endl;

}