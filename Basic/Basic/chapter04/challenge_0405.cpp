// 싫어하는 단어를 '경고음'으로 대체하는 프로그램

#include "../std_lib_facilities.h"

int main()
{
	string input = "";
	vector<string> dislikes = { "JSP", "R", "HTML", "JAVA" };

	cout << "단어를 입력해주세요\n(개발자가 싫어하는 단어의 경우 BLEEP이 출력됩니다)\n: ";
	cin >> input;
	for (string s : dislikes)
	{
		if (input == s)
		{
			cout << "BLEEP\n";
			return 0;
		}
	}
	cout << input << '\n';

	return 0;
}