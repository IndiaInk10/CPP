// 알파벳 문자와 그에 해당하는 아스키코드를 출력하는 프로그램
// 을 for문으로 변환 및 대문자 또한 동일하게 출력하도록 추가

#include "../std_lib_facilities.h"

int main()
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		cout << c << " " << int{ c } << '\n';
	}

	cout << '\n';

	for (char C = 'A'; C <= 'Z'; C++)
	{
		cout << C << " " << int{ C } << '\n';
	}

	return 0;
}