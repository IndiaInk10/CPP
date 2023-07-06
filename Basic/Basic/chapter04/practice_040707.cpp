// 길이와 단위지정자 입력받는 프로그램
// (입력할때 타입이 다른 두 값은 띄어쓰기를 하지 않아도 인식)

#include "../std_lib_facilities.h"

int main()
{
	double length = 0;
	string unit = "";

	while (cin >> length >> unit)
	{
		cout << length << unit << '\n';
	}

	return 0;
}