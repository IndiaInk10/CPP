// 두 정수를 통한 연산

#include "std_lib_facilities.h"

int main()
{
	int val1 = 0, val2 = 0;

	cout << "두 정수 값을 입력하세요 : ";
	cin >> val1 >> val2;

	cout << "작은 값 : " << (val1 <= val2 ? val1 : val2)
	<< "\n큰 값 : " << (val1 <= val2 ? val2 : val1)
	<< "\n둘의 합 : " << val1 + val2
	<< "\n둘의 차 : " << val1 - val2
	<< "\n둘의 곱 : " << val1 * val2
	<< "\n둘의 비율 : " << val1 / val2
	<< '\n';
}