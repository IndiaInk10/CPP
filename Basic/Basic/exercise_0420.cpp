// 이름과 점수를 쌍으로 입력받는 프로그램 (vector 2개)
// 이름 검색 기능 추가

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

	int index = 0;

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

	cout << "\n";
	for (int i = 0; i < names.size(); i++)
	{
		cout << names[i] << "\t" << numbers[i] << "\n";
	}

	cout << "\n";
	for (;;)
	{
		cout << "검색할 이름을 입력해주세요 : ";
		cin >> name;
		index = FindInVector(names, name);

		if (index == -1)
			cout << "이름을 찾을 수 없음\n";
		else
			cout << names[index] << "\t" << numbers[index] << "\n";
	}

	return 0;
}