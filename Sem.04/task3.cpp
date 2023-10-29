#include <iostream>
#include <cmath>

double side(int a, int b)
{
	return sqrt(a*a+b*b);
}

double parcour(int a, int b, int c, int d, int e, int f)
{
	double sideA = side(a, b);
	double sideB = side(c, d);
	double sideC = side(e, f);

	return sideA + sideB + sideC;
}

int main()
{
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;

	double result = parcour(a, b, c, d, e, f);
	std::cout << result;
}