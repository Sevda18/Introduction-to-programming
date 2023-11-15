#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseFirstN(int arr[], size_t size, int num)
{
	for (int i = 0; i < num/2; i++)
	{
		swap(arr[i], arr[num - i-1]);
	}
} 

void print(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	constexpr int SIZE = 7;
	int arr[SIZE] = { 1,-4,4,-5,-9,2,10 };
	int num;
	std::cin >> num;
	reverseFirstN(arr, SIZE, num);
	print(arr, SIZE);
}