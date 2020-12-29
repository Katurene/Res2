#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double w, x, y, z;
	x = 1.825 * pow(10, 2);
	y = 18.225;
	z = -3.298*pow(10,-2);
	w = fabs((pow(x, y / x) - pow(y / x, 1. / 3))) + (y - x) * ((cos(y) - (z / (y - x))) / (1 + pow(y - x, 2)));
	cout << "w = " << w << endl;
	_getch();
}