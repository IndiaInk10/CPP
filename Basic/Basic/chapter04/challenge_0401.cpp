// ���� ����, �Ŀ�带 �޷��� ��ȯ�ϴ� ���α׷�
// ���� if ~ else�� switch�� ���Ȱ� ũ�γ� �߰�

#include "../std_lib_facilities.h"

int main()
{
	constexpr double JPY2USD = 0.0073;
	constexpr double EUR2USD = 1.06;
	constexpr double GBP2USD = 1.2;
	constexpr double CNY2USD = 0.15;
	constexpr double NOK2USD = 0.096;

	double amount = 0;
	char unit = ' ';
	cout << "�׼� �ڿ� ������ �����ϼ��� \n(�� : Y / ���� : U / �Ŀ�� : P / ���� : C / ũ�γ� : K)\n: ";
	cin >> amount >> unit;

	switch (unit) {
	case 'Y': 
		cout << amount << " JPY == " << JPY2USD * amount << " USD\n";
		break;
	case 'U':
		cout << amount << " EUR == " << EUR2USD * amount << " USD\n";
		break;
	case 'P':
		cout << amount << " GBP == " << GBP2USD * amount << " USD\n";
		break;
	case 'C':
		cout << amount << " CNY == " << CNY2USD * amount << " USD\n";
		break;
	case 'K':
		cout << amount << " NOK == " << NOK2USD * amount << " USD\n";
		break;
	default:
		cout << "�˼��մϴ�. '" << unit << "' ��� ������ �𸣰ڱ���.\n";
		break;
	}

	return 0;
}

// ������հ� �� �񱳰� ������ switch ~ case�� �ս��� ���������� �����ϴ�