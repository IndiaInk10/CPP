// 세 문자열 값 비교 후 출력

#include "../std_lib_facilities.h"

int main()
{
	string val1, val2, val3;

	cout << "세 개의 문자열 값을 입력하세요 : ";
	cin >> val1 >> val2 >> val3;

	string first, middle, last;

	first = val1 < val2 ? val1 : val2;
	last = val1 > val2 ? val1 : val2;

	if (val3 <= first) {
		middle = first;
		first = val3;
	}
	else if (first <= val3 && val3 <= last) {
		middle = val3;
	}
	else if (val3 >= last) {
		middle = last;
		last = val3;
	}

	cout << first << ", " << middle << ", " << last << '\n';
}