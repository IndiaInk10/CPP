// 사칙연산 계산기 프로그램

#include "../std_lib_facilities.h"

int main()
{
	string operation;
	double x1 = 0, x2 = 0, result = 0;

	cout << "연산자와 피연산자 두 개를 순서대로 입력하세요 : ";
	cin >> operation >> x1 >> x2;

	if (operation == "+" || operation == "plus") {
		operation = "+";
		result = x1 + x2;
	}
	else if (operation == "-" || operation == "minus") {
		operation = "-";
		result = x1 - x2;
	}
	else if (operation == "*" || operation == "mul") {
		operation = "*";
		result = x1 * x2;
	}
	else if (operation == "/" || operation == "div") {
		operation = "/";
		result = x1 / x2;
	}

	cout << x1 << " " << operation << " " << x2 << " = " << result << '\n';
}