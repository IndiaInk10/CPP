// ���ĺ� ���ڿ� �׿� �ش��ϴ� �ƽ�Ű�ڵ带 ����ϴ� ���α׷�
// �� for������ ��ȯ �� �빮�� ���� �����ϰ� ����ϵ��� �߰�

#include "../std_lib_facilities.h"

int main()
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		cout << c << " " << int{ c } << '\n';
	}

	cout << '\n';

	for (char C = 'A'; C <= 'Z'; C++)
	{
		cout << C << " " << int{ C } << '\n';
	}

	return 0;
}