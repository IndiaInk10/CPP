// n��° �Ҽ����� ã�� ���α׷�

#include "std_lib_facilities.h"

bool IsPrime(int num)
{
	if (num == 1) return false;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)  return false;
	}

	return true;
}

int main()
{
	int n = 0, num = 2;
	
	cout << "ù��° �Ҽ����� ���° �Ҽ����� ã���� �Է��ϼ��� : ";
	cin >> n;

	while (n > 0)
	{
		if (IsPrime(num))
		{
			n--;
			cout << num << " ";
		}

		num++;
	}

	return 0;
}