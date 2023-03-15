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
			cout << "요일과 값을 쌍으로 입력해주세요 : "; 
			cin >> day >> value;
			StringToUpper(day);

			index = FindInVector(days, day);
			if (index != -1)  sums[index / 2] += value;
			else  ignore++;
		}
		if (!cin)  error("잘못된 값이 입력되었습니다.");

		cout << '\n';
		for (int i = 0; i < sums.size(); i++)
		{
			cout << days[i * 2 + 1] << "의 합계 : " << sums[i] << '\n';
		}
		cout << "무시된 값의 개수 : " << ignore << '\n';
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}

	return 0;
}