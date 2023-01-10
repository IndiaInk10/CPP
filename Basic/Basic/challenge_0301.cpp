// 여러 연산자 사용

#include "std_lib_facilities.h"

int main()
{
	int n;

	cout << "정수 값 입력: ";
	cin >> n;

	cout << "n == " << n
	<< "\nn+1 == " << n + 1
	<< "\n3 곱하기 n == " << 3 * n
	<< "\nn의 두 배 == " << n + n
	<< "\nn 제곱 == " << n * n
	<< "\nn 나누기 2 == " << n / 2
	<< "\nn의 제곱근 == " << sqrt((int)n)\
	<< "\n\n";

	int a = 5, b = 2;
	cout << "5/2 == " << a / b
	<< "\n5%2 == " << a % b
	<< "\n5/2 * 2 + 5%2 == 5 : " << ((a / b * b + a % b == a) ? "True" : "False")
	<< '\n';
}