// ���� ������� ��ȯ ���α׷�

#include "std_lib_facilities.h"

int main()
{
	vector<string> sound = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string input = "";

	for (cout << "���� �Ǵ� ����� ���ڸ� �Է����ּ��� : "; 
		cin >> input; 
		cout << "���� �Ǵ� ����� ���ڸ� �Է����ּ��� : ")
	{
		if (input[0] >= 48 && input[0] <= 57)
		{
			cout << sound[input[0] - '0' - 1] << '\n';
		}
		else
		{
			for (string s : sound)
			{
				if (!input.compare(s))
				{
					cout << find(sound.begin(), sound.end(), s) - sound.begin() + 1 << '\n';
				}
			}
		}
	}

	return 0;
}