// ������ �������� ���� �Ҽ� ã�� ���α׷�

#include "std_lib_facilities.h"

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)  return false;
	}

	return true;
}

int main()
{
	int input = 0;

	cout << "�Ҽ��� ã�� �ִ������ �������ּ��� : ";
	cin >> input;

	for (int i = 2; i < input; i++)
	{
		if (isPrime(i))  cout << i << " ";
	}

	return 0;
}