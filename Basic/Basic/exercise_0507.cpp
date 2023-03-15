#include "std_lib_facilities.h"

int QuadraticFormula(double a, double b, double c)
{
	try {
		double condition = b * b - 4 * a * c;

		if (condition < 0)
			error("방정식의 실수 해가 없습니다.");

		double overlap = sqrt(condition) / 2 * a;

		cout << "x1 = " << -1 * b + overlap << '\n';
		cout << "x2 = " << -1 * b - overlap << '\n';
		return 0;
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}
}

int main()
{
	double a = 0.0, b = 0.0, c = 0.0;

	cout << "이차방정식이 다음과 같을때 a*x^2 + b*x + c, 해를 구할 이차방정식의 a, b, c를 입력하시오\n: ";
	cin >> a >> b >> c;

	return QuadraticFormula(a, b, c);
}