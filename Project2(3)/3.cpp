#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double v, x, y, z;
	x = 3.74*pow(10,-2);
	y = -0.825;
	z = 0.16 * pow(10, 2);
	v = (1 + pow(sin(x + y), 2)) / fabs(x - (2 * y) / (1 + pow(x, 2) * pow(y, 2))) * pow(x, fabs(y)) + (pow(cos(atan(1 / z)), 2));
	cout << "v = " << v << endl;

	_getch();
}