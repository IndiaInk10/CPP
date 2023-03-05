// ���� ���� ����� ������ �̴� ����

#include "std_lib_facilities.h"

bool checkNumber(string input)
{
	if (input[0] >= 48 && input[0] <= 57)
	{
		return true;
	}

	return false;
}
int findVectorIndex(vector<string> v, string input)
{
	for (string s : v)
	{
		if (!input.compare(s))
		{
			return find(v.begin(), v.end(), s) - v.begin() + 1;
		}
	}

	return -1;
}

int main()
{
	vector<string> sound = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string input[3];
	double num[2] = { 0, };

	cout << "ù��° �ǿ�����(���ڸ� ����) : ";
	cin >> input[0];

	cout << "�ι�° �ǿ�����(���ڸ� ����) : ";
	cin >> input[1];

	cout << "������ : ";
	cin >> input[2];

	for (int i = 0; i < 2; i++)
	{
		if (checkNumber(input[i]))  num[i] = input[i][0] - '0';
		else  num[i] = findVectorIndex(sound, input[i]);
	}

	cout << num[0] << "�� " << num[1] << "�� ";
	switch (input[2][0])
	{
	case '+':
		cout << "���� " << num[0] + num[1] << "�Դϴ�.";
		break;
	case '-':
		cout << "���� " << num[0] - num[1] << "�Դϴ�.";
		break;
	case '*':
		cout << "���� " << num[0] * num[1] << "�Դϴ�.";
		break;
	case '/':
		cout << "������� " << num[0] / num[1] << "�Դϴ�.";
		break;
	default:
		cout << "�߸��� �Է��Դϴ�.\n";
		break;
	}

	return 0;
}