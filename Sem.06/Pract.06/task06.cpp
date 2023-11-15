#include <iostream>

bool isTrue(int arr1[], int arr2[], int size1, int size2)
{
	int j = 0;
	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] == arr2[j])
		{
			j++;
		}
		else if ( j != 0 && j != size2 )
		{
			return false;
		}
	}

	return true;
}

int main()
{
	constexpr int SIZE = 6;
	constexpr int SIZE2 = 3;
	int arr1[SIZE] = { 1, 4, 9, 8, 4, 2 };
	int arr2[SIZE2] = { 1, 4,  9};
	std::cout<<isTrue(arr1, arr2, SIZE, SIZE2);
}