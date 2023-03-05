// 4.6.3 중앙값 출력 프로그램 개선

#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (int x : temps) sum += x;
	cout << "온도 평균 : " << sum / temps.size() << '\n';

	sort(temps);
	if(temps.size()%2 != 0)
		cout << "온도 중앙값 : " << temps[temps.size() / 2] << '\n';
	else
	{
		double mid = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
		cout << "온도 중앙값 : " << mid << '\n';
	}

	return 0;
}