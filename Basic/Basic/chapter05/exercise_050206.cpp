#include "../std_lib_facilities.h"

double ctok(double c)
{
	constexpr double minC = -273.15;

	try {
		if (c < minC)
			error("-273.15º¸´Ù ³·Àº ¼·¾¾ ¿Âµµ°¡ ÀÔ·ÂµÇ¾ú½À´Ï´Ù.");

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
			error("0º¸´Ù ³·Àº È­¾¾ ¿Âµµ°¡ ÀÔ·ÂµÇ¾ú½À´Ï´Ù.");

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
	cout << "¼·¾¾ ¿Âµµ ÀÔ·Â : ";
	cin >> c;
	double k = ctok(c);
	cout << "È­¾¾ : " << k << '\n';

	cout << "È­¾¾ ¿Âµµ ÀÔ·Â : ";
	cin >> k;
	c = ktoc(k);
	cout << "¼·¾¾ : " << c << '\n';

	return 0;
}