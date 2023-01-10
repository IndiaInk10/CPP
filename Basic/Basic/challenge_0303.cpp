// 반복되는 단어 찾기

#include "std_lib_facilities.h"

int main()
{
	// input : She she laughed He He He because what he did did not look very very good good

	string previous = " ";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "반복된 단어 : " << current << '\n';
		previous = current;
	}
}

/* 반복되는 단어 : 5개
*  이전에 나온 단어이자 완벽하게 동일한 문자열일 경우에만 반복으로 인정한다
*  단어의 정의는 띄어쓰기 문자로 구분된 문자열을 의미한다
*/