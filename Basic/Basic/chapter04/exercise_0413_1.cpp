// 아리스토테네스의 체 알고리즘을 통한 소수 찾기 프로그램

// 실제 숫자들을 사용하는 것인 아닌 배열과 인덱스를 통한 방법

#include "../std_lib_facilities.h"

int main()
{
	int numbers[101] = { 0, };
	numbers[0] = 1, numbers[1] = 1;

	for (int i = 2; i <= 100; i++)
	{
		if (numbers[i] == 1) continue;

		for (int j = 2 * i; j <= 100; j += i)
			numbers[j] = 1;
	}

	for (int i = 2; i <= 100; i++)
	{
		if (numbers[i] == 0)
			cout << i << " ";
	}

	return 0;
}