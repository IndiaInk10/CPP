// �� ������ ���� ����

#include "std_lib_facilities.h"

int main()
{
	int val1 = 0, val2 = 0;

	cout << "�� ���� ���� �Է��ϼ��� : ";
	cin >> val1 >> val2;

	cout << "���� �� : " << (val1 <= val2 ? val1 : val2)
	<< "\nū �� : " << (val1 <= val2 ? val2 : val1)
	<< "\n���� �� : " << val1 + val2
	<< "\n���� �� : " << val1 - val2
	<< "\n���� �� : " << val1 * val2
	<< "\n���� ���� : " << val1 / val2
	<< '\n';
}