// 원하는 쌀의 개수에 따른 사각형의 개수를 구하는 프로그램

#include "../std_lib_facilities.h"

int main()
{
	constexpr int min[3] = { 1000, 1000000, 1000000000 };

	for (int i = 0; i < 3; i++)
	{
		int index = 1, curr = 1, total = 1;
		cout << "1번째 사각형 : 쌀 1개\n총 쌀의 개수 : 1\n";

		while (total <= min[i])
		{
			curr *= 2;
			total += curr;
			index++;

			cout << index << "번째 사각형 : 쌀 " << curr << "개\n";
			cout << "총 쌀의 개수 : " << total << "개\n";
		}
	}

	return 0;
}