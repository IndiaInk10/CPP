// ���������� ���� �Է��ϴ� ��Ȳ���� ���ݱ��� ���� ū �Ǵ� ���� ���� ������ ��� �˷��ִ� ���α׷�

#include "../std_lib_facilities.h"

// (6)
int main()
{
	bool bFirst = true;
	double input = 0;
	double min = 0, max = 0;

	cout << "���� �ϳ��� �Է����ּ��� : ";
	while (cin >> input) {
		if (bFirst)
		{
			bFirst = false;
			min = input;
			max = input;
			cout << input << "\n���� �ϳ��� �Է����ּ��� : ";
			continue;
		}

		cout << input;
		if (input > max)
		{
			cout << "���ݱ��� ���� ū ��";
			max = input;
		}
		else if(input < min)
		{
			cout << "���ݱ��� ���� ���� ��";
			min = input;
		}

		cout << "\n���� �ϳ��� �Է����ּ��� : ";
	}

	return 0;
}