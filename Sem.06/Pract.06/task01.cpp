#include <iostream>

double average(int arr[], size_t size)
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

void absolute(double& num)
{
	if (num < 0)
	{
		num = -num;
	}
}

int closeToAverage(int arr[], size_t size, double num)
{
	double diff = arr[0] - num;
	absolute(diff);
	int index = -1;

	for (int i = 0; i < size; i++)
	{
		double diff1 = arr[i] - num;
		absolute(diff1);
		if (diff1 < diff)
		{
			diff = diff1;
			index = i;
		}
	}

	return arr[index];
}

void printTheNumber(int arr[], int size, int index)
{
	for (int i = 0; i < size; i++)
	{
		if (i == index)
		{
			std::cout << arr[i];
		}
	}
}

int main()
{
	constexpr int SIZE = 4;
	int arr[SIZE] = {5, 7, 4, 9};

	double result = average(arr, SIZE);
	int index = closeToAverage(arr, SIZE,result);
	std::cout << index;
}