#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double b, x, y, z;
	x = 16.55*pow(10,-3);
	y = -2.75;
	z = 0.15;
	b = sqrt(10 * (pow(x, 1. / 3) + pow(x, y + 2))) * (pow(asin(z), 2) - fabs(x - y));
	cout << "b = " << b << endl;
	_getch();
}