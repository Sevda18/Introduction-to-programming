#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	int mostCommonDigit = -1;
	int mostCommonDigitOccurences = 0;

	for (int currentDigit = 0; currentDigit <= 9; currentDigit++)
	{
		int copyOfN = number;
		int currentDigitOccurence = 0;

		while (copyOfN != 0)
		{
			int lastDigit = copyOfN % 10;
			if (lastDigit == currentDigit)
			{
				currentDigitOccurence++;
			}
			copyOfN /= 10;
		}
		if (currentDigitOccurence > mostCommonDigitOccurences)
		{
			mostCommonDigit = currentDigit;
			mostCommonDigitOccurences = currentDigitOccurence;
		}
	}

	std::cout << mostCommonDigit;
}