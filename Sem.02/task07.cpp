#include <iostream>

int main()
{
	int radius;
	int a, b;
	std::cin >> radius >> a >> b;

	if (a*a+b*b < radius * radius)
	{
		std::cout << "In the circle." << std::endl;
	}
	else if (a*a+b*b == radius * radius)
	{
		std::cout << "On the circle." << std::endl;
	}
	else
	{
		std::cout << "Out of the circle." << std::endl;
	}
}