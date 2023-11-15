#include <iostream>

int maxEl(int a, int b)
{	
	return a > b ? a : b;
}

int lcdTwoEl(int a, int b)
{
	int max = maxEl(a,b);
	while (!(max % a == 0 && max % b == 0))
	{
		max++;
	}
	return max;
}

int lcd(int arr[], size_t size)
{
	int i = 0;
	int currentLcd = arr[i];

	for (int i = 1; i < size; i++)
	{
		if (currentLcd % arr[i] != 0)
		{
			currentLcd = lcdTwoEl(currentLcd, arr[i]);
		}
	}

	return currentLcd;
}

int main()
{
	constexpr size_t SIZE = 5;
	int arr[SIZE] = { 2,2,3,4,6 };
	std::cout << lcd(arr, SIZE);
}