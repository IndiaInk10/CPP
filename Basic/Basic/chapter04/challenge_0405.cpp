// �Ⱦ��ϴ� �ܾ '�����'���� ��ü�ϴ� ���α׷�

#include "../std_lib_facilities.h"

int main()
{
	string input = "";
	vector<string> dislikes = { "JSP", "R", "HTML", "JAVA" };

	cout << "�ܾ �Է����ּ���\n(�����ڰ� �Ⱦ��ϴ� �ܾ��� ��� BLEEP�� ��µ˴ϴ�)\n: ";
	cin >> input;
	for (string s : dislikes)
	{
		if (input == s)
		{
			cout << "BLEEP\n";
			return 0;
		}
	}
	cout << input << '\n';

	return 0;
}