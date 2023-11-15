#include <iostream>

int min(int& a, int b)
{
	return a < b ? a : b;
}

int gcdTwoEl(int& a, int& b)
{
	int minEl = min(a, b);
	while (!(a%minEl == 0 && b%minEl==0))
	{
		minEl--;
	}
	return minEl;
}

int gcd(int arr[], int size)
{
	int i = 0;
	int currentGcd = arr[i];
	i++;
	while (i!= size)
	{
		if (arr[i]%currentGcd != 0)
		{
			currentGcd = gcdTwoEl(currentGcd, arr[i]);
		}
		i++;
	}
	return currentGcd;
}

int main()
{
	constexpr int ARR_SIZE = 5;
	int arr[ARR_SIZE] = { 20,17,12,4,6 };
	std::cout << gcd(arr, ARR_SIZE);
}