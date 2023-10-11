#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	bool isTriangle = (a + b > c) && (b + c > a) && (a + c > b);

	std::cout << isTriangle;
}