#include "SearchBi.h"
int searchbi(std::vector<double> arr, double key)
{
	bool flag = false;
	int l = 0; // ����� �������
	int r = arr.size()-1; // ������ �������
	int mid;

	while ((l <= r) && (flag != true)) {
		mid = (l + r) / 2; // ��������� ��������� ������ ������� [l,r]

		if (arr[mid] == key) flag = true; //��������� ���� �� ���������� ���������
		if (arr[mid] > key) r = mid - 1; // ���������, ����� ����� ����� ���������
		else l = mid + 1;
	}

	if (flag) return mid;
	else return -1;
}