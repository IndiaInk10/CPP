// 4.6.3 �߾Ӱ� ��� ���α׷� ����

#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (int x : temps) sum += x;
	cout << "�µ� ��� : " << sum / temps.size() << '\n';

	sort(temps);
	if(temps.size()%2 != 0)
		cout << "�µ� �߾Ӱ� : " << temps[temps.size() / 2] << '\n';
	else
	{
		double mid = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
		cout << "�µ� �߾Ӱ� : " << mid << '\n';
	}

	return 0;
}