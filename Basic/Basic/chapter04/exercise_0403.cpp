// vector�� ����� ���� �Ÿ� ��� ���α׷�

#include "../std_lib_facilities.h"

int main()
{
	vector<double> city_distances;
	cout << "������ �� ���� ������ �Ÿ����� �Է��ϼ��� : ";
	for (double temp; cin >> temp;)
		city_distances.push_back(temp);

	double sum = 0;
	for (int x : city_distances) sum += x;
	cout << "�� �Ÿ� : " << sum << '\n';

	sort(city_distances);
	cout << "�� ������ ���� ���� �ִ� �Ÿ� : " << city_distances[city_distances.size() - 1] << '\n';
	cout << "�� ������ ���� ���� �ּ� �Ÿ� : " << city_distances[0] << '\n';

	cout << "�� ������ ���� ���� ��� �Ÿ� : " << sum / city_distances.size() << '\n';

	return 0;
}