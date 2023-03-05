#include "std_lib_facilities.h"

int main()
{
	cout << "0보다 작거나 10보다 큰 값 입력하지마 : ";
	for (int temp; cin >> temp && temp >= 0 && temp <= 10;)
	{
		cout << "잘 입력했음\n";
		cout << "0보다 작거나 10보다 큰 값 입력하지마 : ";
	}
	cout << "0보다 작거나 10보다 크잖아...\n";

	return 0;
}