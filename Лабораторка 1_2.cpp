// ����������� 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //���������� ������� ����
	int A[2], B[2], C[2];
	double AB, BC, AC, S, p;
	cout << "��������� ���� 3 ��������:\n";
	cout << "������� 3 �����:\n";
	//������ �������� �� �����
	cout << "����� A:\n";
	cout << "\tX = ";
	cin >> A[0];
	cout << "\tY = ";
	cin >> A[1];
	cout << "����� B:\n";
	cout << "\tX = ";
	cin >> B[0];
	cout << "\tY = ";
	cin >> B[1];
	cout << "����� C:\n";
	cout << "\tX = ";
	cin >> C[0];
	cout << "\tY = ";
	cin >> C[1];
	//������� ����� ��������
	AB = sqrt((B[0] - A[0])*(B[0] - A[0]) + (B[1] - A[1])*(B[1] - A[1]));
	BC = sqrt((B[0] - C[0])*(B[0] - C[0]) + (B[1] - C[1])*(B[1] - C[1]));
	AC = sqrt((C[0] - A[0])*(C[0] - A[0]) + (C[1] - A[1])*(C[1] - A[1]));
	//���������� ����� ��������
	if (AB >= BC)
	{
		if (AB >= AC)
		{
			if (BC >= AC)
				cout << "AB >= BC >= AC ";
			else
				cout << "AB >= AC >= BC ";
		}
		else
			cout << "AC >= AB >= BC ";
	}
	else
	{
		if (BC >= AC)
		{
			if(AB>=AC)
				cout << "BC >= AB >= AC ";
			else
				cout << "BC >= AC >= AB ";
		}
		else
			cout << "AC >= BC >= AB ";
	}
	//������� ����� ��������
	cout << "\nAB = ";
	cout << AB;
	cout << "\nBC = ";
	cout << BC;
	cout << "\nAC = ";
	cout << AC;
	_getch();
	return 0;
}