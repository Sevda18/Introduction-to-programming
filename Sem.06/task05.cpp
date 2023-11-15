#include <iostream>

bool isInversion(int a, int b)
{
	return a > b ? true : false;
}

int sum(int arr[], int size, int target)
{
	int count = 0;
	for (int j = target+1; j < size; j++)
	{
		if (isInversion(arr[target],arr[j]))
		{
			count++;
		}
	}

	return count;
}

int sumAll(int arr[], int size)
{
	int sumAll = 0;
	for (size_t i = 0; i < size; i++)
	{
		int num = sum(arr, size, i);
		sumAll += num;
	}
	return sumAll;
}

int main()
{
	constexpr int ARR_SIZE = 6;
	int arr[ARR_SIZE] = { 5,4,3,2,1,0 };
	std::cout << sumAll(arr, ARR_SIZE);
}