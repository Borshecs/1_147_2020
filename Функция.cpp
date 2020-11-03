#include <iostream>
#include <cmath>
#include <string>


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
	for (double x = xn; x <= xk; x = x + dx)
	{
		double y = calc(a, x);
		cout << "x = " << x << "\t" << "y = " << y << std::endl;
	}
	return;
}

void taskB(double a, double *x, int size) // TaskB выводит немного не то, что нужно, почему?
{
	for (int i = 0; i < size; i++)
	{
		double x[] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
		double y = calc(a, x[i]);
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;
		return;
	}
}
int main(int argc, char* argv[])
{
	/*int a = 2.25;
	int xn = 1.2;
	int xk = 2.7;
	int deltax = 0.3;
	*/

	const double a = 2.25;
	cout << "TaskA:" << endl;
	taskA(2.25, 1.2, 2.7, 0.3);
	double x[] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
	cout << "TaskB:" << endl;
	taskB(a, x, sizeof(x) / sizeof(x[0]));
	return 0;

}





/*
double* X = new double[4]{ };
B( );
delete[] X;
return 0;
*/


