// ���ĺ� ���ڿ� �׿� �ش��ϴ� �ƽ�Ű�ڵ带 ����ϴ� ���α׷�

#include "std_lib_facilities.h";

int main()
{
	char c = 'a';
	while (c <= 'z') {
		cout << c << " " << int{ c } << '\n';
		c++;
	}

	return 0;
}