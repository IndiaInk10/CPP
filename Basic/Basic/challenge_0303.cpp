// �ݺ��Ǵ� �ܾ� ã��

#include "std_lib_facilities.h"

int main()
{
	// input : She she laughed He He He because what he did did not look very very good good

	string previous = " ";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "�ݺ��� �ܾ� : " << current << '\n';
		previous = current;
	}
}

/* �ݺ��Ǵ� �ܾ� : 5��
*  ������ ���� �ܾ����� �Ϻ��ϰ� ������ ���ڿ��� ��쿡�� �ݺ����� �����Ѵ�
*  �ܾ��� ���Ǵ� ���� ���ڷ� ���е� ���ڿ��� �ǹ��Ѵ�
*/