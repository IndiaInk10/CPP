// �Ƹ������׳׽��� ü �˰����� ���� �Ҽ� ã�� ���α׷�

// ���� ���ڵ��� ����ϴ� ���� �ƴ� �迭�� �ε����� ���� ���

#include "../std_lib_facilities.h"

int main()
{
	int numbers[101] = { 0, };
	numbers[0] = 1, numbers[1] = 1;

	for (int i = 2; i <= 100; i++)
	{
		if (numbers[i] == 1) continue;

		for (int j = 2 * i; j <= 100; j += i)
			numbers[j] = 1;
	}

	for (int i = 2; i <= 100; i++)
	{
		if (numbers[i] == 0)
			cout << i << " ";
	}

	return 0;
}