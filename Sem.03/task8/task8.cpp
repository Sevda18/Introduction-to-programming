#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		int countWhiteSpace = number - i;
		for (int i = 0; i < countWhiteSpace; i++)
		{
			std::cout << " ";
		}
		std::cout << i;
		int copyOfI = i-1;
		
		
		while (copyOfI != 0)
		{
			if (copyOfI != 1)
			{
				std::cout << copyOfI;
				copyOfI -= 1;
			}
			if (copyOfI == 1)
			{
				std::cout << copyOfI;
				break;
			}
		}
			
		std::cout << std::endl;
	}

	for (int i = number-1; i >= 1; i--)
	{
		int countWhiteSpace = number - i;
		for (int i = 0; i < countWhiteSpace; i++)
		{
			std::cout << " ";
		}
		std::cout << i;
		int copyOfI = i - 1;


		while (copyOfI != 0)
		{
			if (copyOfI != 1)
			{
				std::cout << copyOfI;
				copyOfI -= 1;
			}
			if (copyOfI == 1)
			{
				std::cout << copyOfI;
				break;
			}
		}

		std::cout << std::endl;
	}


}