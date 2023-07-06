// 아리스토테네스의 체 알고리즘을 통한 소수 찾기 프로그램
/*
	(0) 2부터 소수를 구하고자 하는 구간의 모든 수를 나열한다. 그림에서 회색 사각형으로 두른 수들이 여기에 해당한다.
	(1) 2는 소수이므로 오른쪽에 2를 쓴다. (빨간색)
	(2) 자기 자신을 제외한 2의 배수를 모두 지운다.
	(3) 남아있는 수 가운데 3은 소수이므로 오른쪽에 3을 쓴다. (초록색)
	(4) 자기 자신을 제외한 3의 배수를 모두 지운다.
	(5) 남아있는 수 가운데 5는 소수이므로 오른쪽에 5를 쓴다. (파란색)
	(6) 자기 자신을 제외한 5의 배수를 모두 지운다.
	(7) 남아있는 수 가운데 7은 소수이므로 오른쪽에 7을 쓴다. (노란색)
	(8) 자기 자신을 제외한 7의 배수를 모두 지운다.
	(9) 위의 과정을 반복하면 구하는 구간의 모든 소수가 남는다.
*/

#include "../std_lib_facilities.h"

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
	vector<int> numbers;
	vector<int> primes;
	int curr = 0;

	// (0)
	for (int i = 2; i <= 100; i++)
		numbers.push_back(i);

	// (1~)
	while (numbers.size() != 0)
	{
		if (IsPrime(numbers[0]))
		{
			curr = numbers[0];
			primes.push_back(curr);

			for (int i = 0; i < numbers.size(); i++)
			{
				if (numbers[i] % curr == 0)
					numbers.erase(numbers.begin() + i);
			}
		}
	}

	for (int num : primes)
	{
		cout << num << " ";
	}

	return 0;
}