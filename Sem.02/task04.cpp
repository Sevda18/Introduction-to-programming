#include <iostream>

int main()
{
	char letter;
	std::cin >> letter;

	double surface = 0;

	if (letter == 's')
	{
		double a;
		std::cin >> a;
		surface = a * a;
	}
	else if (letter == 'r')
	{
		double a, b;
		std::cin >> a >> b;

		surface = a * b;
	}
	else if (letter == 'c')
	{
		double a;
		std::cin >> a;

		surface = a * a * 3.14;
	}
	else if (letter == 't')
	{
		double a, b;
		std::cin >> a >> b;
		surface = a * b / 2.0;
	}

	std::cout << surface << std::endl;
}