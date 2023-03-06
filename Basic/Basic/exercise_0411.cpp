// 소수 찾기 프로그램

#include "std_lib_facilities.h"

bool IsPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)  return false;
	}

	return true;
}

int main()
{
	vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	vector<int> myPrimes;

	for (int i = 2; i <= 100; i++)
	{
		if (IsPrime(i))  myPrimes.push_back(i);
	}

	for (int i = 0; i < primes.size(); i++)
	{
		if (myPrimes[i] != primes[i])
		{
			cout << "찾으신 소수가 잘못되었습니다.\n";
			return 0;
		}
	}

	cout << "모든 소수가 옳바르게 찾아졌습니다.\n";
	return 0;
}