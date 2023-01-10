// 주어진 정수 값이 홀짝인지 확인하는 프로그램

#include "std_lib_facilities.h"

int main()
{
	int input = 0;

	cout << "홀짝을 확인할 정수 하나를 입력해주세요 : ";
	cin >> input;

	cout << input << "는(은) " << (input % 2 == 0 ? "짝수" : "홀수") << "입니다\n";
}