// ���ϴ� ���� ������ ���� �簢���� ������ ���ϴ� ���α׷�

#include "../std_lib_facilities.h"

int main()
{
	constexpr int min[3] = { 1000, 1000000, 1000000000 };

	for (int i = 0; i < 3; i++)
	{
		int index = 1, curr = 1, total = 1;
		cout << "1��° �簢�� : �� 1��\n�� ���� ���� : 1\n";

		while (total <= min[i])
		{
			curr *= 2;
			total += curr;
			index++;

			cout << index << "��° �簢�� : �� " << curr << "��\n";
			cout << "�� ���� ���� : " << total << "��\n";
		}
	}

	return 0;
}