// ���� �˾Ƹ����� ���� ���α׷�

#include "std_lib_facilities.h"

int main()
{
	string answer = "";
	int your_number = 50;
	int ex_max = 100;
	int ex_min = 1;
	

	for (cout << "����� �����ϴ� ���ڰ� " << your_number << "�ΰ���?(��/�ٿ�/��) : "; 
		cin >> answer; 
		cout << "����� �����ϴ� ���ڰ� " << your_number << "�ΰ���?(��/�ٿ�/��) : ")
	{
		if (!answer.compare("��"))
		{
			ex_min = your_number;
		}
		else if (!answer.compare("�ٿ�"))
		{
			ex_max = your_number;
		}
		else if (!answer.compare("��"))
		{
			cout << "����� ������ ���ڴ� " << your_number << "�Դϴ�. EZ bro\n";
			return 0;
		}
		else
		{
			cout << "�߸��� �Է��Դϴ�.\n";
			return 0;
		}

		if ((ex_min + ex_max) / 2 == your_number) your_number = ex_max;
		else your_number = (ex_min + ex_max) / 2;
	}


	return 0;
}