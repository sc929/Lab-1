#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int A[2], B[2], C[2];
	double AB, BC, AC, S, p;
	cout << "Сравнение длин 3 отрезков:" << endl;
	cout << "Введите 3 точки:" << endl;
	cout << "Точка A:" << endl;
	cout << "\tX = ";
	cin >> A[0];
	cout << "\tY = ";
	cin >> A[1];
	cout << "Точка B:" << endl;
	cout << "\tX = ";
	cin >> B[0];
	cout << "\tY = ";
	cin >> B[1];
	cout << "Точка C:" << endl;
	cout << "\tX = ";
	cin >> C[0];
	cout << "\tY = ";
	cin >> C[1];
	AB = sqrt((B[0] - A[0])*(B[0] - A[0]) + (B[1] - A[1])*(B[1] - A[1]));
	BC = sqrt((B[0] - C[0])*(B[0] - C[0]) + (B[1] - C[1])*(B[1] - C[1]));
	AC = sqrt((C[0] - A[0])*(C[0] - A[0]) + (C[1] - A[1])*(C[1] - A[1]));
	if (AB >= BC)
	{
		if (AB >= AC)
		{
			if (BC >= AC)
				cout << "AB >= BC >= AC " << endl;
			else
				cout << "AB >= AC >= BC " << endl;
		}
		else
			cout << "AC >= AB >= BC " << endl;
	}
	else
	{
		if (BC >= AC)
		{
			if(AB>=AC)
				cout << "BC >= AB >= AC " << endl;
			else
				cout << "BC >= AC >= AB " << endl;
		}
		else
			cout << "AC >= BC >= AB " << endl;
	}
	cout << "AB = " << endl;
	cout << AB;
	cout << "BC = " << endl;
	cout << BC;
	cout << "AC = " << endl;
	cout << AC;
	_getch();
	return 0;
}
