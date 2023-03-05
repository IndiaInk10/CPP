// exercise_0408과 연계해서 총 64개의 사각형에는 몇개의 쌀이 들어가는가?

#include "std_lib_facilities.h"

int main()
{
	int iRice = 1;
	double dRice = 1;

	int index = 1;
	double curr = 1;
	cout << "1번째 사각형 : 쌀 1개\n총 쌀의 개수 : 1\n";

	for (int i = 1; i < 64; i++)
	{
		curr *= 2;
		iRice += curr;
		dRice += curr;
		index++;

		cout << index << "번째 사각형 : 쌀 " << curr << "개\n";
		cout << "총 쌀의 개수(int) : " << iRice << "개\n";
		cout << "총 쌀의 개수(double) : " << dRice << "개\n";
	}

	return 0;
}