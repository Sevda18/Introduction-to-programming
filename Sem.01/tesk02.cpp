#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int d = (n % 10) * 100 + ((n / 10)%10) * 10 + n / 100;

	std::cout << d << std::endl;;
	std::cout << d + 1 << std::endl;
}