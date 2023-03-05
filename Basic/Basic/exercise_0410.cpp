// ���������� ���� ���α׷�

#include "std_lib_facilities.h"

// com -1 / draw 0 / player 1
int checkWhoWin(int player, int com)
{
	switch (player) 
	{
	case 0:
		switch (com)
		{
		case 0:  return 0;
		case 1:  return -1;
		case 2:  return 1;
		}
	case 1:
		switch (com)
		{
		case 0:  return 1;
		case 1:  return 0;
		case 2:  return -1;
		}
	case 2:
		switch (com)
		{
		case 0:  return -1;
		case 1:  return 1;
		case 2:  return 0;
		}
	}
}

// rock scissors paper
vector<string> rsp = { "����", "��", "����" };
int ConvertRSP(string str)
{
	return find(rsp.begin(), rsp.end(), str) - rsp.begin();
}
string ConvertRSP(int num)
{
	return rsp[num];
}

int main()
{
	// rock : 0 / paper : 1 / scissors : 2
	vector<int> com = { 0, 0, 1, 2, 2, 1, 0, 1, 2, 1 };
	int seed = 0;
	string input = "";

	cout << "���������� �Է°��� ���� ���� �õ尪 �Է� : ";
	cin >> seed;
	seed %= 10;

	cout << "������������ �����մϴ�.\n";
	for (int i = 0; i < com.size(); i++)
	{
		cout << "���������� �� �ϳ��� �Է����ּ��� : ";
		cin >> input;
		cout << "�÷��̾� : " << input << " / ��ǻ�� : " << ConvertRSP(com[seed]) << "\n";
		switch (checkWhoWin(ConvertRSP(input), com[seed]))
		{
		case -1:
			cout << "��ǻ�� ��\n";
			break;
		case 0:
			cout << "���º�\n";
			break;
		case 1:
			cout << "�÷��̾� ��\n";
			break;
		}

		seed++;
		seed %= com.size();
	}

	return 0;
}