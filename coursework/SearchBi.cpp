#include "SearchBi.h"
int searchbi(std::vector<int> arr, int key)
{
//	sort(arr.begin(), arr.end());//бинарный поиск работает только для отс. массива
	int left = 0;//левая граница
	int right = arr.size();//правая граница
		int midd = 0;
		while (1)
		{
			midd = (left + right) / 2;

			if (key < arr[midd])       // если искомое меньше значения в ячейке
				right = midd - 1;      // смещаем правую границу поиска
			else if (key > arr[midd])  // если искомое больше значения в ячейке
				left = midd + 1;    // смещаем левую границу поиска
			else                       // иначе (значения равны)
				return midd;           // функция возвращает индекс ячейки

			if (left > right)          // если границы сомкнулись 
				return -1;
		}
}
