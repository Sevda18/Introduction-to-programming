#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	bool isMaxFirst = num1 > num2 && num1 > num3;
	bool isMaxSecond = num2 > num1 && num2 > num3;
	bool isMaxThird = num3 > num1 && num3 > num2;

	bool isMinFirst = num1 < num2 && num1 < num3;
	bool isMinSecond = num2 < num1&& num2 < num3;
	bool isMinThird = num3 < num1 && num3 < num2;

	int max = isMaxFirst * num1 + isMaxSecond * num2 + isMaxThird * num3;
	int min = isMinFirst * num1 + isMinSecond * num2 + isMinThird * num3;

	std::cout << max << " " << min << std::endl;

}