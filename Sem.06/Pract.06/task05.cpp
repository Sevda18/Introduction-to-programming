#include <iostream>

void absoluteArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]<0)
		{
			arr[i] = -arr[i];
		}
	}
}

void sum(int arr[], int size, int result[])
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		result[j] = arr[i] - arr[i + 1];
		j++;
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	constexpr int SIZE = 7;
	int arr[SIZE] = { 1, -4, 4, -5, -9, 2, 10 };
	
	int result[SIZE];
	sum(arr, SIZE, result);
	absoluteArr(result, SIZE);
	print(result, SIZE-1);
}