#include <iostream>

int countPositiveEl(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}
	return count;
}

void onlyPositiveElOnTheLeft(int arr[], int size)
{
	int result = countPositiveEl(arr, size);
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			arr[j] = arr[i];
			j++;
		}
	}
}


void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	constexpr int SIZE = 7;
	int arr[SIZE] = { 1, -4, -4, -5, -9, 2, 10 };
	int result = countPositiveEl(arr, SIZE);
	onlyPositiveElOnTheLeft(arr, SIZE);

	printArr(arr, SIZE);
}