#include <iostream>

bool isPalindromFirst(int arr[], int size)
{
	if (size==1)
	{
		return true;
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i]!=arr[size-i-1])
		{
			return false;
		}
	}
	return true;
}

bool isPalindromSecond(int arr[], int size, int size1)
{
	int count = 0;
	for (int i = size1, j = size-1; i < j; i++, j--)
	{
		if (arr[i] != arr[j])
		{
			return false;
		}
		count++;
	}
	return true;
}

bool isTrue(int arr[], int size)
{
	int target = 0;
	while (target != size - 1)
	{
		int size1 = target;
		int size2 = size;
		std::cout <<target<<" "<< isPalindromFirst(arr, size1) << " " << isPalindromSecond(arr, size2, target) << std::endl;
		if (isPalindromFirst(arr, size1) && isPalindromSecond(arr, size2, size1))
		{
			return true;
		}
		target++;
	}

	return false;
}

int main()
{
	constexpr size_t ARR_SIZE = 7;
	int arr[ARR_SIZE] = { 1, 2, 3, 2, 1, 1, 1 };
	std::cout<<isTrue(arr, ARR_SIZE);
}