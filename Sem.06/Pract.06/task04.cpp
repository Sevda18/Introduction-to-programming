#include <iostream>

int counting(int arr[], size_t size)
{
	int count = 0;
	int max = count;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr[i+1])
		{
			count++;
		}
		else
		{
			count += 1;
			if (max < count)
			{
				max = count;
			}
			count = 0;
		}
	}
	return max;
}

int main()
{
	constexpr int SIZE = 11;
	int arr[SIZE] = { 3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3 };
	std::cout << counting(arr, SIZE);
}
