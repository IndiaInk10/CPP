// �� ���� ���� ���ϴ� ���α׷�

#include "std_lib_facilities.h";

int main()
{
	// (1), (4) int -> double
	double num1 = 0, num2 = 0;
	cout << "����� �� ���� �Է����ּ���: ";
	while (cin >> num1 >> num2) {
		cout << num1 << " , " << num2 << '\n';

		// (2)
		if (num1 > num2)
		{
			num1 = num1 + num2;
			num2 = num1 - num2;
			num1 = num1 - num2;
		}
		cout << "�� ���� �� : " << num1 << '\n';
		cout << "�� ū �� : " << num2 << '\n';

		// (3)
		if (num1 == num2)  cout << "�� ���� ����\n";
		// (5)
		else if (num2 - num1 < 1.0/100)  cout << "�� ���� ���� ����\n";
	}

	return 0;
}