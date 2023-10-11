#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	int first = num / 100;
	int second = (num / 10) %10;
	int third = num % 10;

	std::cout << "first digit: " << first << std::endl;
	std::cout << "second digit: " << second << std::endl;
	std::cout << "third digit: " << third << std::endl;
	std::cout << "sum: " << first + second + third << std::endl;


}
