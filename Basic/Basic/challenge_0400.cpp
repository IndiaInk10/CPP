// ���� ����, �Ŀ�带 �޷��� ��ȯ�ϴ� ���α׷�

#include "std_lib_facilities.h"

int main()
{
	constexpr double JPY2USD = 0.0073;
	constexpr double EUR2USD = 1.06;
	constexpr double GBP2USD = 1.2;

	double amount = 0;
	char unit = ' ';
	cout << "�׼� �ڿ� ������ �����ϼ��� \n(�� : Y / ���� : U / �Ŀ�� : P)\n: ";
	cin >> amount >> unit;

	if (unit == 'Y')
	{
		cout << amount << " JPY == " << JPY2USD * amount << " USD\n";
	}
	else if (unit == 'U')
	{
		cout << amount << " EUR == " << EUR2USD * amount << " USD\n";
	}
	else if (unit == 'P')
	{
		cout << amount << " GBP == " << GBP2USD * amount << " USD\n";
	}
	else
	{
		cout << "�˼��մϴ�. '" << unit << "' ��� ������ �𸣰ڱ���.\n";
	}

	return 0;
}