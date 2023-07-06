// 지속적으로 값을 입력하는 상황에서 지금까지 가장 큰 또는 작은 값이 나오는 경우 알려주는 프로그램

#include "../std_lib_facilities.h"

// (6)
int main()
{
	bool bFirst = true;
	double input = 0;
	double min = 0, max = 0;

	cout << "숫자 하나를 입력해주세요 : ";
	while (cin >> input) {
		if (bFirst)
		{
			bFirst = false;
			min = input;
			max = input;
			cout << input << "\n숫자 하나를 입력해주세요 : ";
			continue;
		}

		cout << input;
		if (input > max)
		{
			cout << "지금까지 가장 큰 값";
			max = input;
		}
		else if(input < min)
		{
			cout << "지금까지 가장 작은 값";
			min = input;
		}

		cout << "\n숫자 하나를 입력해주세요 : ";
	}

	return 0;
}