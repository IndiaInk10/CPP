// a*x^2 + b*x + c = 0를 푸는 프로그램

#include "std_lib_facilities.h"

void function(double a, double b, double c)
{
	double x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
	double x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "x1 : " << x1 << "\nx2 : " << x2 << "\n";
	cout << "x1을 대입 : " << a * x1 * x1 + b * x1 + c << "\n";
	cout << "x2을 대입 : " << a * x2 * x2 + b * x2 + c << "\n";
}

int main()
{
	function(1, -3, 2);

	return 0;
}