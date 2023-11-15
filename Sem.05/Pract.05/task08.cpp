#include <iostream>

void reverse(int& num)
{
	int result = 0;
	while (num!=0)
	{
		int lastDigit = num % 10;
		result = result * 10 + lastDigit;
		num /= 10;
	}
	num = result;
}

void saveResult(int& num, int& start, int& end)
{
	int result = 0;
	int count = 1;
	while (count <= end)
	{
		int lastDigit = num % 10;
		if (count >= start && count <= end)
		{
			result = result * 10 + lastDigit;
		}
		count++;
		num /= 10;
	}

	num = result;
}

int main()
{
	int num, start, end;
	std::cin >> num >> start >> end;
	reverse(num);
	saveResult(num, start, end);
	std::cout << num;
}

