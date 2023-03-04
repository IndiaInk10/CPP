// 엔과 유로, 파운드를 달러로 변환하는 프로그램

#include "std_lib_facilities.h"

int main()
{
	constexpr double JPY2USD = 0.0073;
	constexpr double EUR2USD = 1.06;
	constexpr double GBP2USD = 1.2;

	double amount = 0;
	char unit = ' ';
	cout << "액수 뒤에 단위를 지정하세요 \n(엔 : Y / 유로 : U / 파운드 : P)\n: ";
	cin >> amount >> unit;

	if (unit == 'Y')
	{
		cout << amount << " JPY == " << JPY2USD * amount << " USD\n";
	}
	else if (unit == 'U')
	{
		cout << amount << " EUR == " << EUR2USD * amount << " USD\n";
	}
	else if (unit == 'P')
	{
		cout << amount << " GBP == " << GBP2USD * amount << " USD\n";
	}
	else
	{
		cout << "죄송합니다. '" << unit << "' 라는 단위는 모르겠군요.\n";
	}

	return 0;
}