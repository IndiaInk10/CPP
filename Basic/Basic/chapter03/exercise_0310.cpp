// ��Ģ���� ���� ���α׷�

#include "../std_lib_facilities.h"

int main()
{
	string operation;
	double x1 = 0, x2 = 0, result = 0;

	cout << "�����ڿ� �ǿ����� �� ���� ������� �Է��ϼ��� : ";
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