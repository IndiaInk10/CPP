#include "std_lib_facilities.h"

int main()
{
	cout << "0���� �۰ų� 10���� ū �� �Է������� : ";
	for (int temp; cin >> temp && temp >= 0 && temp <= 10;)
	{
		cout << "�� �Է�����\n";
		cout << "0���� �۰ų� 10���� ū �� �Է������� : ";
	}
	cout << "0���� �۰ų� 10���� ũ�ݾ�...\n";

	return 0;
}