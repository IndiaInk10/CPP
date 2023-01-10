// 영어 스펠링을 숫자로 바꾸는 프로그램

#include "std_lib_facilities.h"

int main()
{
	string num_string;
	cout << "숫자로 변환할 영어 스펠링을 입력해주세요 : ";
	cin >> num_string;

	if (num_string == "zero")  num_string = "0";
	else if (num_string == "one")  num_string = "1";
	else if (num_string == "two")  num_string = "2";
	else if (num_string == "three")  num_string = "3";
	else if (num_string == "four")  num_string = "4";
	else  num_string = "숫자가 아님";

	cout << "-> " << num_string << '\n';
}