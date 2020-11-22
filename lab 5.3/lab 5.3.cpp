#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double g(const double x);

int main()
{
	double zp, zk, a;
	int n;

	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "zp" << "   |"
		<< setw(7) << "zk" << "    |"
		<< setw(10) << "   a" << "         |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;


	double zg = (zk - zp) / n;
	double z = zp;

	while (z <= zk)
	{
		a = g(2 * z) + (g)((g)(2 * z + (z * z)) + g(1.5));
		cout << "|" << setw(7) << setprecision(2) << zp << " |"
			<< setw(10) << setprecision(5) << zk << " |"
			<< setw(10) << setprecision(5) << a << " " << a << " |"
			<< setw(5) << n << " |"
			<< endl;

		z += zg;
	}
	cout << "-------------------------------------------------" << endl;


	return 0;
}

double g(const double x)
{
	if (abs(x) >= 1)
		return (sin(x)) / (cos(x)+2);
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		do
		{
			n++;
			double R = pow(x,2*n);
			a *= R;
			S += a;
		} while (n < 6);
		return S;
	}
}
