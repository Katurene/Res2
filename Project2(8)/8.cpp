#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double w, x, y, z;
	x = -2.235 * pow(10, -2);
	y = 2.23;
	z = 15.221;
	w = (exp(fabs(x - y)) * pow(fabs(x - y), (x + y))) / (atan(x) + atan(z)) + pow((pow(x, 6) + log2(y)), 1. / 3);
	cout << "w = " << w << endl;
	_getch();
}