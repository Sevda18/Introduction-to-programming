#include <iostream>

int powerOfTen(int& num)
{
	int target = 1;
	int result = 1;
	while (target != num+1)
	{
		result = result * 10;
		target++;
	}
	return result;
}

int countDigit(int num)
{
	int count = 0;
	while (num!= 0)
	{
		num /= 10;
		count++;
	}
	return count;
}

void transformNumbers(int& num1, int& num2, int& num3)
{
	int dev = powerOfTen(num3);
	int power = countDigit(num2);
	int copyOfNumber1 = num1;
	num1 = num1 / dev;
	int numberTwo = copyOfNumber1 % dev;
	num2 = numberTwo* powerOfTen(power) + num2;
}

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	transformNumbers(num1, num2, num3);
	std::cout << num1 << " " << num2;
	
}