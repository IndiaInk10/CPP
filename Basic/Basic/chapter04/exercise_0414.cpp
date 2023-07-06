// exercise_0413에서 max까지의 모든 소수를 구하도록 프로그램 수정

#include "../std_lib_facilities.h"

int main()
{
	int max = 0;
	
	cout << "소수를 구할 최대범위를 입력하세요 : ";
	cin >> max;
	
	vector<int> numbers(max + 1);
	numbers[0] = 1, numbers[1] = 1;

	for (int i = 2; i <= max; i++)
	{
		if (numbers[i] == 1) continue;

		for (int j = 2 * i; j <= max; j += i)
			numbers[j] = 1;
	}

	for (int i = 2; i <= max; i++)
	{
		if (numbers[i] == 0)
			cout << i << " ";
	}

	return 0;
}