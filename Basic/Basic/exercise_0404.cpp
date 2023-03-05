// 숫자 알아맞히기 게임 프로그램

#include "std_lib_facilities.h"

int main()
{
	string answer = "";
	int your_number = 50;
	int ex_max = 100;
	int ex_min = 1;
	

	for (cout << "당신이 생각하는 숫자가 " << your_number << "인가요?(업/다운/예) : "; 
		cin >> answer; 
		cout << "당신이 생각하는 숫자가 " << your_number << "인가요?(업/다운/예) : ")
	{
		if (!answer.compare("업"))
		{
			ex_min = your_number;
		}
		else if (!answer.compare("다운"))
		{
			ex_max = your_number;
		}
		else if (!answer.compare("예"))
		{
			cout << "당신이 생각한 숫자는 " << your_number << "입니다. EZ bro\n";
			return 0;
		}
		else
		{
			cout << "잘못된 입력입니다.\n";
			return 0;
		}

		if ((ex_min + ex_max) / 2 == your_number) your_number = ex_max;
		else your_number = (ex_min + ex_max) / 2;
	}


	return 0;
}