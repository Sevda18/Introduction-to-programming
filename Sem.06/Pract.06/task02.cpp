#include <iostream>

bool isSorted(int arr[], size_t size)
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] > arr[i+1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	constexpr int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,0 };
	std::cout << isSorted(arr, SIZE);
}