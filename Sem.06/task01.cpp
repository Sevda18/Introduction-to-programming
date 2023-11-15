#include <iostream>

bool isPalindrom(int arr[], size_t size)
{
	int i = 0;
	int j = size - 1;

	while (i < j)
	{
		if (arr[i] != arr[j])
		{
			return false;
		}
		i++, j--;
	}
	return true;
}

int main()
{
	constexpr size_t ARR_SIZE = 6;
	int arr[ARR_SIZE] = { 1,5,3,3,5,1 };
	std::cout << isPalindrom(arr, ARR_SIZE);
}

