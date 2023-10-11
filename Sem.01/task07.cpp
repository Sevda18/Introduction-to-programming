#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int hundred = n / 100;
	n = n % 100;

	int fifty = n / 50;
	n = n % 50;

	int twenty = n / 20;
	n = n % 20;

	int ten = n / 10;
	n = n % 10;

	int five = n / 5;
	n = n % 5;

	int two = n / 2;
	n = n % 2;

	int one = n;

	std::cout << hundred <<"x 100lv"<< std::endl;
	std::cout << fifty << "x 50lv" << std::endl;
	std::cout << twenty << "x 20lv" << std::endl;
	std::cout << ten << "x 10lv" << std::endl;
	std::cout << five << "x 5lv" << std::endl;
	std::cout << two << "x 2lv" << std::endl;
	std::cout << one << "x 1lv" << std::endl;
}