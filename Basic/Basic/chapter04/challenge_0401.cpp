// 엔과 유로, 파운드를 달러로 변환하는 프로그램
// 에서 if ~ else를 switch로 위안과 크로네 추가

#include "../std_lib_facilities.h"

int main()
{
	constexpr double JPY2USD = 0.0073;
	constexpr double EUR2USD = 1.06;
	constexpr double GBP2USD = 1.2;
	constexpr double CNY2USD = 0.15;
	constexpr double NOK2USD = 0.096;

	double amount = 0;
	char unit = ' ';
	cout << "액수 뒤에 단위를 지정하세요 \n(엔 : Y / 유로 : U / 파운드 : P / 위안 : C / 크로네 : K)\n: ";
	cin >> amount >> unit;

	switch (unit) {
	case 'Y': 
		cout << amount << " JPY == " << JPY2USD * amount << " USD\n";
		break;
	case 'U':
		cout << amount << " EUR == " << EUR2USD * amount << " USD\n";
		break;
	case 'P':
		cout << amount << " GBP == " << GBP2USD * amount << " USD\n";
		break;
	case 'C':
		cout << amount << " CNY == " << CNY2USD * amount << " USD\n";
		break;
	case 'K':
		cout << amount << " NOK == " << NOK2USD * amount << " USD\n";
		break;
	default:
		cout << "죄송합니다. '" << unit << "' 라는 단위는 모르겠군요.\n";
		break;
	}

	return 0;
}

// 상수집합과 값 비교가 용이한 switch ~ case가 손쉽게 유지보수가 가능하다