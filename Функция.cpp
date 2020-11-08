
#include <iostream>
#include <cmath>
#include <string>

double calc(double a,  double x);
double calc(double x);
void taskA(double a, double xn, double xk, double dx);
void taskB(double a,  double* x, int size);

using namespace std;

double calc(double a, double x)
{
	double y = pow(a, x * x - 1) - log(x * x - 1) + pow(x * x - 1, 1.0 / 3.0);
	return y;
}


double calc(double x)
{
	const double a = 2.25;

	return calc(a, x);
}

void taskA(double a, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx)
	{
		double y = calc(a, x);
		cout << "x = " << x << "\t" << "y = " << y << std::endl;
	}
	return;
}

void taskB(double a, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, x[i]);
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;

	}
}
int main(int argc, char* argv[])
{
	double a = 2.25;
	double b = 0.95;
	double xn = 1.2;
	double xk = 2.7;
	double dx = 0.3;
	cout << "Variant 22" << endl;
	cout << "taskA:" << endl;
	taskA(a, xn, xk, dx);

	double x[] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
	cout << "taskB:" << endl;
	taskB(2.25,  x, sizeof(x) / sizeof(x[0]));

	return 0;
}

