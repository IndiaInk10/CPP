// vector를 사용한 도시 거리 통계 프로그램

#include "../std_lib_facilities.h"

int main()
{
	vector<double> city_distances;
	cout << "각각의 두 도시 사이의 거리들을 입력하세요 : ";
	for (double temp; cin >> temp;)
		city_distances.push_back(temp);

	double sum = 0;
	for (int x : city_distances) sum += x;
	cout << "총 거리 : " << sum << '\n';

	sort(city_distances);
	cout << "두 인접한 도시 간의 최대 거리 : " << city_distances[city_distances.size() - 1] << '\n';
	cout << "두 인접한 도시 간의 최소 거리 : " << city_distances[0] << '\n';

	cout << "두 인접한 도시 간의 평균 거리 : " << sum / city_distances.size() << '\n';

	return 0;
}