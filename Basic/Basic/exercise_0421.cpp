// �̸��� ������ ������ �Է¹޴� ���α׷� (vector 2��)
// �̸� �˻� ����� ���� �˻� ������� ����

#include "std_lib_facilities.h"

int FindInVector(vector<string>& v, string str)
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
	vector<int> searchIndex;

	string name = "";
	int number = 0;

	int index = 0;

	for (;;)
	{
		cout << "�̸��� ������ �Է����ּ��� : ";
		cin >> name >> number;

		if (FindInVector(names, name) != -1)
		{
			cout << "�ߺ��� �̸��� �ԷµǾ����ϴ�. �Է�����!\n";
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
		searchIndex.clear();

		cout << "�˻��� ������ �Է����ּ��� : ";
		cin >> number;
		
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == number)  searchIndex.push_back(i);
		}

		if (searchIndex.size() == 0)
			cout << "������ ã�� �� ����\n";
		else
		{
			for (int idx : searchIndex)
			{
				cout << names[idx] << "\n";
			}
		}
	}

	return 0;
}