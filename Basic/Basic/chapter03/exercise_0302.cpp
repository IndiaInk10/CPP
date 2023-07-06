// 마일을 킬로미터로 변환하는 프로그램

#include "../std_lib_facilities.h"

int main()
{
	double mile = 0.0;
	double km = 0.0;
	cout << "킬로미터(km)로 변환할 마일(mile) 값을 입력하세요 : ";
	cin >> mile;
	km = mile * 1.609;
	cout << mile << "마일은 " << km << "킬로미터 입니다.\n";
}