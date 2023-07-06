// 나이를 개월 수로 출력

#include "../std_lib_facilities.h"

int main()
{
	cout << "성과 나이를 입력하세요\n";

	string first_name = "???";
	double age = -1;

	cin >> first_name >> age;
	age *= 12;
	cout << "안녕하세요, " << first_name << " (개월 수 " << age << ")\n";
}