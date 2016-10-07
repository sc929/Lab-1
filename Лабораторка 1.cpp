#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, res;
	cout << "((x^2+27)^1/2)/(y-12)+3=" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	while(y==12)
	{
		cout << "Знаменатель не может равняться нулю!\ny=";
		cin >> y;
	}
	res = (sqrt(x * x + 27)) / (y - 12) + 3;
	cout << res;
	_getch();
	return 0;
}
