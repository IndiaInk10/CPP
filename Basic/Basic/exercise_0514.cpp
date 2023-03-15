#include "std_lib_facilities.h"

int FindInVector(vector<string>& v, string str)
{
	vector<string>::iterator vi = find(v.begin(), v.end(), str);

	if (vi == v.end())  return -1;
	else
		return distance(v.begin(), vi);
}

void StringToUpper(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
}

int main()
{
	string day = "";
	int value = 0, ignore = 0, index = 0;

	vector<string> days = { "MON", "MONDAY", "TUE", "TUESDAY", "WED", "WEDNESDAY", "THU", "THURSDAY", "FRI", "FRIDAY", "SAT", "SATURDAY", "SUN", "SUNDAY" };
	vector<int> sums(7);

	try {
		for (int i = 0; i < sums.size(); i++)
		{
			cout << "���ϰ� ���� ������ �Է����ּ��� : "; 
			cin >> day >> value;
			StringToUpper(day);

			index = FindInVector(days, day);
			if (index != -1)  sums[index / 2] += value;
			else  ignore++;
		}
		if (!cin)  error("�߸��� ���� �ԷµǾ����ϴ�.");

		cout << '\n';
		for (int i = 0; i < sums.size(); i++)
		{
			cout << days[i * 2 + 1] << "�� �հ� : " << sums[i] << '\n';
		}
		cout << "���õ� ���� ���� : " << ignore << '\n';
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}

	return 0;
}