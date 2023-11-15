#include <iostream>

int findMissingNumber(const int* arr, int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // ����������� ���� ������������ ����� �� ������ � ������ ��� ������� ��������
        if (arr[mid] == mid + arr[0]) {
            // ������������ ����� �� ������ � ������� ��������
            left = mid + 1;
        }
        else {
            // ������������ ����� �� ������ � ������ ��������
            right = mid;
        }
    }

    // ������� ���������� �� ������ �� �������, ����� ��� ��������
    return left + arr[0];
}

int main()
{
	constexpr int size = 6;
	int sortedArr[size] = { 1,3,4, 5,6, 7 };
	std::cout << findMissingNumber(sortedArr, size);
}