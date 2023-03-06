// n번째 소수까지 찾는 프로그램

#include "std_lib_facilities.h"

bool IsPrime(int num)
{
	if (num == 1) return false;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)  return false;
	}

	return true;
}

int main()
{
	int n = 0, num = 2;
	
	cout << "첫번째 소수부터 몇번째 소수까지 찾을지 입력하세요 : ";
	cin >> n;

	while (n > 0)
	{
		if (IsPrime(num))
		{
			n--;
			cout << num << " ";
		}

		num++;
	}

	return 0;
}