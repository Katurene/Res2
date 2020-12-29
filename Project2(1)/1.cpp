#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double t, x, y, z;
	x = 14.26;
	y = -1.22;
	z = 3.5 * pow(10, -2);
	t = 2 * (cos(x - (M_PI / 6))) / (0.5 + pow(sin(y), 2)) * (1 + ((pow(z, 2)) / (3 - (pow(z, 2) / 5)))) ;
	cout << "t = " << t << endl;
	_getch();
}