// ���� ������ ���

#include "std_lib_facilities.h"

int main()
{
	int n;

	cout << "���� �� �Է�: ";
	cin >> n;

	cout << "n == " << n
	<< "\nn+1 == " << n + 1
	<< "\n3 ���ϱ� n == " << 3 * n
	<< "\nn�� �� �� == " << n + n
	<< "\nn ���� == " << n * n
	<< "\nn ������ 2 == " << n / 2
	<< "\nn�� ������ == " << sqrt((int)n)\
	<< "\n\n";

	int a = 5, b = 2;
	cout << "5/2 == " << a / b
	<< "\n5%2 == " << a % b
	<< "\n5/2 * 2 + 5%2 == 5 : " << ((a / b * b + a % b == a) ? "True" : "False")
	<< '\n';
}