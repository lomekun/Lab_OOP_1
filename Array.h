#pragma once
#include "number.h"
class Array
{
public:
	Array();
	void create(int new_len);
	void print_all();
	void fill_in();
	void sort(bool a);
	void average_and_SKO();
	void change_size(int new_len);
	void change_elem(int index, number new_elem);
	int print_len();

private:
	int len = 0;
	number* arr;

};

