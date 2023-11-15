#include <iostream>

//bool setAllValue(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = false;
//	}
//}

void findNumber(int arr[], int size, int target)
{
	for (int i = 0; i < size; i++)
	{
		if (target == arr[i] && arr[i] == false)
		{
			arr[i] = true;
		}
	}
}

void isThereEl(int arr1[], /*bool arr[],*/ int arr2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		findNumber(arr1, size, arr2[i]);
	}
}

bool isPermutation(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == false)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	constexpr int SIZE = 6;
	int arr1[SIZE] = { 1, 4, 4, 0, 4, 0 };
	int arr2[SIZE] = { 0, 4, 4, 4, 1, 5 };
	isThereEl(arr1, arr2, SIZE);
	std::cout << isPermutation(arr2, SIZE);
}

