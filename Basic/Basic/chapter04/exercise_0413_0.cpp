// �Ƹ������׳׽��� ü �˰����� ���� �Ҽ� ã�� ���α׷�
/*
	(0) 2���� �Ҽ��� ���ϰ��� �ϴ� ������ ��� ���� �����Ѵ�. �׸����� ȸ�� �簢������ �θ� ������ ���⿡ �ش��Ѵ�.
	(1) 2�� �Ҽ��̹Ƿ� �����ʿ� 2�� ����. (������)
	(2) �ڱ� �ڽ��� ������ 2�� ����� ��� �����.
	(3) �����ִ� �� ��� 3�� �Ҽ��̹Ƿ� �����ʿ� 3�� ����. (�ʷϻ�)
	(4) �ڱ� �ڽ��� ������ 3�� ����� ��� �����.
	(5) �����ִ� �� ��� 5�� �Ҽ��̹Ƿ� �����ʿ� 5�� ����. (�Ķ���)
	(6) �ڱ� �ڽ��� ������ 5�� ����� ��� �����.
	(7) �����ִ� �� ��� 7�� �Ҽ��̹Ƿ� �����ʿ� 7�� ����. (�����)
	(8) �ڱ� �ڽ��� ������ 7�� ����� ��� �����.
	(9) ���� ������ �ݺ��ϸ� ���ϴ� ������ ��� �Ҽ��� ���´�.
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