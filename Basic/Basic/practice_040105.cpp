// 두 수의 값을 비교하는 프로그램

#include "std_lib_facilities.h";

int main()
{
	// (1), (4) int -> double
	double num1 = 0, num2 = 0;
	cout << "출력할 두 수를 입력해주세요: ";
	while (cin >> num1 >> num2) {
		cout << num1 << " , " << num2 << '\n';

		// (2)
		if (num1 > num2)
		{
			num1 = num1 + num2;
			num2 = num1 - num2;
			num1 = num1 - num2;
		}
		cout << "더 작은 값 : " << num1 << '\n';
		cout << "더 큰 값 : " << num2 << '\n';

		// (3)
		if (num1 == num2)  cout << "두 수가 같음\n";
		// (5)
		else if (num2 - num1 < 1.0/100)  cout << "두 수가 거의 같음\n";
	}

	return 0;
}