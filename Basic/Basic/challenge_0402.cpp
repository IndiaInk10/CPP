// 알파벳 문자와 그에 해당하는 아스키코드를 출력하는 프로그램

#include "std_lib_facilities.h";

int main()
{
	char c = 'a';
	while (c <= 'z') {
		cout << c << " " << int{ c } << '\n';
		c++;
	}

	return 0;
}