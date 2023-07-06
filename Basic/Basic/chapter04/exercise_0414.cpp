// exercise_0413���� max������ ��� �Ҽ��� ���ϵ��� ���α׷� ����

#include "../std_lib_facilities.h"

int main()
{
	int max = 0;
	
	cout << "�Ҽ��� ���� �ִ������ �Է��ϼ��� : ";
	cin >> max;
	
	vector<int> numbers(max + 1);
	numbers[0] = 1, numbers[1] = 1;

	for (int i = 2; i <= max; i++)
	{
		if (numbers[i] == 1) continue;

		for (int j = 2 * i; j <= max; j += i)
			numbers[j] = 1;
	}

	for (int i = 2; i <= max; i++)
	{
		if (numbers[i] == 0)
			cout << i << " ";
	}

	return 0;
}