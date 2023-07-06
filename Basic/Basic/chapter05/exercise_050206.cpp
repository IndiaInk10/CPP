#include "../std_lib_facilities.h"

double ctok(double c)
{
	constexpr double minC = -273.15;

	try {
		if (c < minC)
			error("-273.15���� ���� ���� �µ��� �ԷµǾ����ϴ�.");

		double k = c + 273.15;
		return k;
	}
	catch (runtime_error& e) {
		cerr <<"runtime_error : " << e.what() << '\n';
		return 1;
	}
}
double ktoc(double k)
{
	constexpr double minK = 0;

	try {
		if (k < minK)
			error("0���� ���� ȭ�� �µ��� �ԷµǾ����ϴ�.");

		double c = k - 273.15;
		return c;
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}
}

int main()
{
	double c = 0;
	cout << "���� �µ� �Է� : ";
	cin >> c;
	double k = ctok(c);
	cout << "ȭ�� : " << k << '\n';

	cout << "ȭ�� �µ� �Է� : ";
	cin >> k;
	c = ktoc(k);
	cout << "���� : " << c << '\n';

	return 0;
}