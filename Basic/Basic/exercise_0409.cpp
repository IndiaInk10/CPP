// exercise_0408�� �����ؼ� �� 64���� �簢������ ��� ���� ���°�?

#include "std_lib_facilities.h"

int main()
{
	int iRice = 1;
	double dRice = 1;

	int index = 1;
	double curr = 1;
	cout << "1��° �簢�� : �� 1��\n�� ���� ���� : 1\n";

	for (int i = 1; i < 64; i++)
	{
		curr *= 2;
		iRice += curr;
		dRice += curr;
		index++;

		cout << index << "��° �簢�� : �� " << curr << "��\n";
		cout << "�� ���� ����(int) : " << iRice << "��\n";
		cout << "�� ���� ����(double) : " << dRice << "��\n";
	}

	return 0;
}