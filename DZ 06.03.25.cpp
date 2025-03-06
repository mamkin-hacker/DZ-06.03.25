
#include <iostream>
#include <locale>
#include <string>
#include <array>
#include <Windows.h>
#include <vector>
#include <algorithm>
using namespace::std;

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int nums[10];

	int start = 0;
	int end = 9;

	for (int i = 1; i < 11; i++)
	{
		srand(clock());
	
		nums[i] = rand() % (end - start + 1) + start;
		cout << "Ёлемент массива номер " << i+1 << " равен " << nums[i] << endl;

		if (nums[i - 1] > nums[i]) 
		{

		}
	
	}




}