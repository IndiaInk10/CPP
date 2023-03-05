// 숫자 영어발음 변환 프로그램

#include "std_lib_facilities.h"

int main()
{
	vector<string> sound = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string input = "";

	for (cout << "숫자 또는 영어로 숫자를 입력해주세요 : "; 
		cin >> input; 
		cout << "숫자 또는 영어로 숫자를 입력해주세요 : ")
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