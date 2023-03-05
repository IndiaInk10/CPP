// 가위바위보 게임 프로그램

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
vector<string> rsp = { "바위", "보", "가위" };
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

	cout << "가위바위보 입력값을 위한 랜덤 시드값 입력 : ";
	cin >> seed;
	seed %= 10;

	cout << "가위바위보를 시작합니다.\n";
	for (int i = 0; i < com.size(); i++)
	{
		cout << "가위바위보 중 하나를 입력해주세요 : ";
		cin >> input;
		cout << "플레이어 : " << input << " / 컴퓨터 : " << ConvertRSP(com[seed]) << "\n";
		switch (checkWhoWin(ConvertRSP(input), com[seed]))
		{
		case -1:
			cout << "컴퓨터 승\n";
			break;
		case 0:
			cout << "무승부\n";
			break;
		case 1:
			cout << "플레이어 승\n";
			break;
		}

		seed++;
		seed %= com.size();
	}

	return 0;
}