// 이름과 점수를 쌍으로 입력받는 프로그램 (vector 2개)

#include "std_lib_facilities.h"

int FindInVector(vector<string> v, string str)
{
	vector<string>::iterator vi = find(v.begin(), v.end(), str);

	if (vi == v.end())  return -1;
	else
		return distance(v.begin(), vi);
}

int main()
{
	vector<string> names;
	vector<int> numbers;

	string name = "";
	int number = 0;

	for (;;)
	{
		cout << "이름과 점수를 입력해주세요 : ";
		cin >> name >> number;

		if (FindInVector(names, name) != -1)
		{
			cout << "중복된 이름이 입력되었습니다. 입력종료!\n";
			break;
		}

		names.push_back(name);
		numbers.push_back(number);
	}

	for (int i = 0; i < names.size(); i++)
	{
		cout << names[i] << "\t" << numbers[i] << "\n";
	}

	return 0;
}