// ������ �ִ� ���� �հ踦 �޷��� �����ִ� ���α׷�

#include "../std_lib_facilities.h"

int main()
{
	int pennie = 0, nickel = 0, dime = 0, quarter = 0, half_dollar = 0, dollar = 0, total = 0;

	cout << "�� ��ϸ� ������ �輼��? ";
	cin >> pennie;
	cout << "�� ������ ������ �輼��? ";
	cin >> nickel;
	cout << "�� ������ ������ �輼��? ";
	cin >> dime;
	cout << "�� ���͸� ������ �輼��? ";
	cin >> quarter;
	cout << "�� ���� �޷��� ������ �輼��? ";
	cin >> half_dollar;
	cout << "�� �޷��� ������ �輼��? ";
	cin >> dollar;

	cout << "You have " << pennie << " pennie" << (pennie > 0 ? "s\n" : "\n");
	cout << "You have " << nickel << " nickel" << (nickel > 0 ? "s\n" : "\n");
	cout << "You have " << dime << " dime" << (dime > 0 ? "s\n" : "\n");
	cout << "You have " << half_dollar << " half dollar" << (half_dollar > 0 ? "s\n" : "\n");
	total = pennie * 1 + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + dollar * 100;
	cout << "The value of all of your coins is $" << total/100 << "." << total%100 << " cent" << (total > 0 ? "s\n" : "\n");
}