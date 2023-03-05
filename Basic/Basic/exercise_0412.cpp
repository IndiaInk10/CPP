// 범위가 지정되지 않은 소수 찾기 프로그램

#include "std_lib_facilities.h"

bool isPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)  return false;
	}

	return true;
}

int main()
{
	int input = 0;

	cout << "소수를 찾을 최대범위를 설정해주세요 : ";
	cin >> input;

	for (int i = 2; i < input; i++)
	{
		if (isPrime(i))  cout << i << " ";
	}

	return 0;
}