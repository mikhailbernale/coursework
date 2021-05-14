#include "SearchBi.h"
int searchbi(std::vector<double> arr, double key)
{
	bool flag = false;
	int l = 0; // левая граница
	int r = arr.size()-1; // правая граница
	int mid;

	while ((l <= r) && (flag != true)) {
		mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]

		if (arr[mid] == key) flag = true; //проверяем ключ со серединным элементом
		if (arr[mid] > key) r = mid - 1; // проверяем, какую часть нужно отбросить
		else l = mid + 1;
	}

	if (flag) return mid;
	else return -1;
}