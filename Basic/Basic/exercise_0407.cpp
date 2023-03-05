// 영어 숫자 사용이 가능한 미니 계산기

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

	cout << "첫번째 피연산자(한자리 숫자) : ";
	cin >> input[0];

	cout << "두번째 피연산자(한자리 숫자) : ";
	cin >> input[1];

	cout << "연산자 : ";
	cin >> input[2];

	for (int i = 0; i < 2; i++)
	{
		if (checkNumber(input[i]))  num[i] = input[i][0] - '0';
		else  num[i] = findVectorIndex(sound, input[i]);
	}

	cout << num[0] << "과 " << num[1] << "의 ";
	switch (input[2][0])
	{
	case '+':
		cout << "합은 " << num[0] + num[1] << "입니다.";
		break;
	case '-':
		cout << "차는 " << num[0] - num[1] << "입니다.";
		break;
	case '*':
		cout << "곱은 " << num[0] * num[1] << "입니다.";
		break;
	case '/':
		cout << "나누기는 " << num[0] / num[1] << "입니다.";
		break;
	default:
		cout << "잘못된 입력입니다.\n";
		break;
	}

	return 0;
}