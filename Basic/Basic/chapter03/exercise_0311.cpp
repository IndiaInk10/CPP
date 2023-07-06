// 가지고 있는 동전 합계를 달러로 보여주는 프로그램

#include "../std_lib_facilities.h"

int main()
{
	int pennie = 0, nickel = 0, dime = 0, quarter = 0, half_dollar = 0, dollar = 0, total = 0;

	cout << "몇 페니를 가지고 계세요? ";
	cin >> pennie;
	cout << "몇 니켈을 가지고 계세요? ";
	cin >> nickel;
	cout << "몇 다임을 가지고 계세요? ";
	cin >> dime;
	cout << "몇 쿼터를 가지고 계세요? ";
	cin >> quarter;
	cout << "몇 하프 달러를 가지고 계세요? ";
	cin >> half_dollar;
	cout << "몇 달러를 가지고 계세요? ";
	cin >> dollar;

	cout << "You have " << pennie << " pennie" << (pennie > 0 ? "s\n" : "\n");
	cout << "You have " << nickel << " nickel" << (nickel > 0 ? "s\n" : "\n");
	cout << "You have " << dime << " dime" << (dime > 0 ? "s\n" : "\n");
	cout << "You have " << half_dollar << " half dollar" << (half_dollar > 0 ? "s\n" : "\n");
	total = pennie * 1 + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + dollar * 100;
	cout << "The value of all of your coins is $" << total/100 << "." << total%100 << " cent" << (total > 0 ? "s\n" : "\n");
}