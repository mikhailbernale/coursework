#include "SearchBi.h"
int searchbi(std::vector<int> arr, int key)
{
//	sort(arr.begin(), arr.end());//�������� ����� �������� ������ ��� ���. �������
	int left = 0;//����� �������
	int right = arr.size();//������ �������
		int midd = 0;
		while (1)
		{
			midd = (left + right) / 2;

			if (key < arr[midd])       // ���� ������� ������ �������� � ������
				right = midd - 1;      // ������� ������ ������� ������
			else if (key > arr[midd])  // ���� ������� ������ �������� � ������
				left = midd + 1;    // ������� ����� ������� ������
			else                       // ����� (�������� �����)
				return midd;           // ������� ���������� ������ ������

			if (left > right)          // ���� ������� ���������� 
				return -1;
		}
}
