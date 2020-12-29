#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double a, x, y, z;
	x = -15.246;
	y = 4.642*pow(10,-2);
	z = 20.001 * pow(10, 2);
	a = log(pow(y, -(sqrt(fabs(x))))) * (x - y / 2) + pow(sin(atan(z)), 2);
	cout << "a = " << a << endl;
	_getch();
}