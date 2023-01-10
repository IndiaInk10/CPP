// 안전하지 않은 타입 변환

#include "std_lib_facilities.h"

int main()
{
	// input : 2 3 128 1001 -1 56 56.9 56.2 89

	double d = 0.0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		
		cout << "d==" << d
			 << " i==" << i
			 << " i2==" << i2
			 << " char(" << c << ")\n";
	}
}