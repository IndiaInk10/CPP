// ���� ���縵�� ���ڷ� �ٲٴ� ���α׷�

#include "std_lib_facilities.h"

int main()
{
	string num_string;
	cout << "���ڷ� ��ȯ�� ���� ���縵�� �Է����ּ��� : ";
	cin >> num_string;

	if (num_string == "zero")  num_string = "0";
	else if (num_string == "one")  num_string = "1";
	else if (num_string == "two")  num_string = "2";
	else if (num_string == "three")  num_string = "3";
	else if (num_string == "four")  num_string = "4";
	else  num_string = "���ڰ� �ƴ�";

	cout << "-> " << num_string << '\n';
}