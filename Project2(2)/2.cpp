#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double u, x, y, z;
	x = -4.5;
	y = 0.75 * pow(10, -4);
	z = 0.845 * pow(10, 2);
	u = pow(8 + pow(x - y, 2) + 1, 1. / 3) / (pow(x, 2) + pow(y, 2) + 2) - exp(fabs(x - y)) * pow(pow(tan(z), 2) + 1, x);
	cout << "u = " << u << endl;

	_getch();
}