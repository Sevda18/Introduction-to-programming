#include <iostream>

int main()
{
	int hours, minutes;
	std::cin >> hours >> minutes;

	int totalMinutes = hours * 60 + minutes;

	int addFifteen = totalMinutes + 15;
	int newHours = addFifteen / 60;
	int newMinutes = addFifteen % 60;

	if (newHours<10)
	{
		std::cout << "0";
	}
	std::cout << newHours<<":";
	if (newMinutes < 10)
	{
		std::cout << "0";
	}
	std::cout << newMinutes << std::endl;

}