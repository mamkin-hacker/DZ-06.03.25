
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

	int start = 1;
	int end = 9;

	int maxItem = 0;
	int minItem = 9;

	int changeNums[10] = {0,0,0,0,0,0,0,0,0,0};


	for (int i = 0; i < 10; i++)
	{
		srand(time(0) + clock());
	
		nums[i] = rand() % (end - start + 1) + start;
		cout << endl << "������� ������� ����� " << i + 1 << " ����� " << nums[i] << endl;

		if (nums[i] > maxItem)
		{
			maxItem = nums[i];
		}
		
		if (nums[i] < minItem)
		{
			minItem = nums[i];	
		}	

		switch (nums[i])
		{
		case 1: changeNums[0] += 1;
			break;
		case 2: changeNums[1] += 1;
			break;
		case 3: changeNums[2] += 1;
			break;
		case 4: changeNums[3] += 1;
			break;
		case 5: changeNums[4] += 1;
			break;
		case 6: changeNums[5] += 1;
			break;
		case 7: changeNums[6] += 1;
			break;
		case 8: changeNums[7] += 1;
			break;
		case 9: changeNums[8] += 1;
			break;
			default : cout << endl << "��������� ���� �����-��!" << endl; 
			break;
		}
	}
	cout << endl << "************************************************************* " << endl;

	cout << endl << "������������ �������� �������� � ���� �������: " << maxItem  << endl;
	cout << endl << "����������� �������� �������� � ���� �������: " << minItem  << endl;

	cout << endl << "************************************************************* " << endl;

	for (int j =0; j<9; j++) 
	{
		cout << endl << "���������� ��������� � ������� �� ��������� "<< j + 1 << " ����� " << changeNums[j] << endl;
	}

	



}