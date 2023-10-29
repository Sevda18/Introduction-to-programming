#include <iostream>

bool isContain(int x, int y, int a, int b)
{
	if (x*x+y*y == a*a + b*b)
	{
		return true;
	}
	return false;
}

int main()
{
	int x, y, a, b;
	std::cin >> x >> y >> a >> b;

	std::cout << isContain(x, y, a, b);
}