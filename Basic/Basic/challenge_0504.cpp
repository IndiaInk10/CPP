#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;

	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	for (int x : temps)
	{
		if (x > high_temp) high_temp = x;
		if (x < low_temp) low_temp = x;
		sum += x;
	}

	cout << "최고 온도 : " << high_temp << '\n';
	cout << "최저 온도 : " << low_temp << '\n';
	cout << "평균 온도 : " << sum/temps.size() << '\n';

	return 0;
}