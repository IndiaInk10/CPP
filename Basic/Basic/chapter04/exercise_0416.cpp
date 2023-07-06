// 주어진 숫자 시퀀스에서 최빈값을 찾는 프로그램

#include "../std_lib_facilities.h"

int FindInVector(vector<int>& v, int num)
{
	vector<int>::iterator vi = find(v.begin(), v.end(), num);

	if (vi == v.end())  return -1;
	else return distance(v.begin(), vi);
}

int main()
{
	vector<int> numbers;
	int input = 0;

	vector<int> mostNumber;
	vector<int> count;

	int maxIndex = 0;
	int max = 0;

	cout << "최빈값을 구할 숫자 시퀀스를 입력해주세요 : ";
	while (cin >> input)
	{
		numbers.push_back(input);
	}
	
	for (int num : numbers)
	{
		int index = FindInVector(mostNumber, num);

		if (index != -1)
			count[index]++;
		else
		{
			mostNumber.push_back(num);
			count.push_back(1);
		}
	}

	for (int i = 0; i < count.size(); i++)
	{
		if (count[i] > max)
		{
			maxIndex = i;
			max = count[i];
		}
	}

	cout << "해당 숫자 시퀀스의 최빈값은 " << mostNumber[maxIndex] << " 입니다\n";

	return 0;
}