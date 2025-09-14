#include "Array.h"
#include "iostream"
#include "Application.h"

using namespace std;

Array::Array() 
{

}

void Array::create(int new_len)
{
	if (len < 0) 
	{
		cout<<"Размерность массива не может быть отрицательной или нулевой!"<< endl;
		this->len = 0;
	}
	this->len = new_len;
	arr = new number[len];
}

void Array::print_all() 
{
	for (int i = 0;i<len;i++) 
	{
		cout << *(arr + i) << " ";
	}
}
void Array::fill_in() 
{
	for (int i = 0; i<len; i++) 
	{
		cin >> *(arr + i);
		cout << endl;
	}
}
void Array::sort(bool a)
{
	for(int i = 0;i<len-1;++i)
	{
		for (int j = 0; j < len - 1 - i; ++j) 
		{
			if (a && arr[j] > arr[j + 1]) 
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

}
void Array::average_and_SKO() 
{
	{
		number sum = 0;
		number average = 0;
		number sko = 0;

		for (int i = 0; i < len; i++) {
			sum += *(arr + i);
		}

		average = sum / this->len;

		for (int i = 0; i < len; i++) {
			sko += pow(*(arr + i) - average, 2);
		}

		sko /= len - 1;
		sko = pow(sko, 0.5);

		cout << "Среднее значение массива: " << average << endl << " СКО равно: " << sko << endl;
	}

}
void Array::change_size(int new_len) 
{
	{
		if (new_len < 0) {
			cout << "Размерность массива можно создать только из неотрицательных чисел!" << endl;
			return;
		}
		number* newArr = new number[new_len];
		int minLen = (new_len < len) ? new_len : len;

		for (int i = 0; i < minLen; ++i) {
			newArr[i] = arr[i];
		}
		for (int i = minLen; i < new_len; ++i) {
			newArr[i] = 0;
		}

		this->len = new_len;

		delete[] arr;
		arr = newArr;

	}
}
void Array::change_elem(int index, number new_elem) 
{
	arr[index] = new_elem;
}
int Array::print_len() 
{
	return this->len;
} 