#include <iostream>

int main()
{
	double num1, num2;
	char symbol;
	std::cin >> num1 >> num2>>symbol;

	if (symbol == '+')
	{
		std::cout << num1 + num2;
	}
	else if (symbol == '-')
	{
		std::cout << num1 - num2;
	}
	else if (symbol == '*')
	{
		std::cout << num1 * num2;
	}
	else if (symbol == '/' && num2 != 0)
	{
		std::cout<<num1/num2;
	}
	else
	{
		std::cout << "Invalid operation.";
	}

	std::cout << std::endl;
	
}