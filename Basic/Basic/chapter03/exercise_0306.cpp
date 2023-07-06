// 세 정수 값 비교 후 출력

#include "../std_lib_facilities.h"

int main()
{
	int val1 = 0, val2 = 0, val3 = 0;

	cout << "세 개의 정수 값을 입력하세요 : ";
	cin >> val1 >> val2 >> val3;

	int first = 0, middle = 0, last = 0;
	
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