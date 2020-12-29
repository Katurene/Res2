#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double w, x, y, z;
	x = 0.4 * pow(10, 4);
	y = -0.875;
	z = -0.475*pow(10, -3);
	w = pow(fabs(cos(x) - cos(y)), (1 + 2 * pow(sin(y), 2))) * (1 + z + (pow(z, 2) / 2) + (pow(z, 3) / 3) + (pow(z, 4) / 4));
	cout << "w = " << w << endl;
	_getch();
}