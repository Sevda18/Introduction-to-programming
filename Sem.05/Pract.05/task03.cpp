#include <iostream>

int minN(int& a, int& b)
{
	return a < b ? a : b;
}

int gcd(int& a, int& b)
{
	int min = minN(a, b);
	int target = min;

	while (!(a%target== 0 && b%target == 0))
	{
		target--;
	}

	return target;
}

void decimal(int& a, int& b)
{
	int devision = gcd(a, b);
	a /= devision;
	b /= devision;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	decimal(a, b);
	std::cout << a <<" "<< b;
}