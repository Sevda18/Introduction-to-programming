#include <iostream>

int module(int num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

int main()
{
	int num;
	std::cin >> num;

	int result = module(num);
	std::cout << result;
}