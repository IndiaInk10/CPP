// ���̸� ���� ���� ���

#include "../std_lib_facilities.h"

int main()
{
	cout << "���� ���̸� �Է��ϼ���\n";

	string first_name = "???";
	double age = -1;

	cin >> first_name >> age;
	age *= 12;
	cout << "�ȳ��ϼ���, " << first_name << " (���� �� " << age << ")\n";
}