#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		a = (pow(x, 3) + 2);

		if (x < 4)
			b = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
		else
			if (x >= 7)
				b = log10(2 * x + exp(5 * x + 5));
			else
				b = atan(abs((x + 3.0) / 2)) + 7 * x;
		y = a + b;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}