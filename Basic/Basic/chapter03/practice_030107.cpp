// ���� ���� ���� ���α׷�(�ǽ����� 1 ~ 7)

#include "../std_lib_facilities.h"

int main()
{
	// (1)
	cout << "������ ���� ����� �̸��� �Է��ϼ���:\n";
	string first_name;
	cin >> first_name;
	cout << "ģ���ϴ� " << first_name << ",\n\n";

	// (2)
	cout << " �� ��������? ���� �� �����ϴ�. ���� �ͳ׿�.\n"
		<< "�ð� ���ø� Zoom���� ���� ȭ��ȸ�Ƕ� �� �� ���������� ���ڳ׿�.\n";

	// (3)
	cout << "�ٸ� ģ���� �̸��� �Է��ϼ���:\n";
	string friend_name;
	cin >> friend_name;
	cout << "���� " << friend_name << " ���� �� �����Ű���?\n";

	// (4)
	char friend_sex;
	cout << "�ش� ģ���� ���ڸ� m, ���ڸ� f�� �Է��ϼ���:\n";
	cin >> friend_sex;
	cout << friend_name << "�� ���ðŵ� ";
	if (friend_sex == 'm')  cout << "�׿��� ";
	else if (friend_sex == 'f') cout << "�׳࿡�� ";
	cout << "������ ��ȭ�ش޶�� �����ּ���.\n";

	// (5)
	int age = 0;
	cout << "���� ���� ����� ���̸� �Է��ϼ���:\n";
	cin >> age;
	cout << "�� ���� " << age << "��° ������ �����̴� ��⸦ ������.\n";
	if (age <= 0 || age >= 100)  simple_error("�峭ġ�� ������!");

	// (6)
	if (age < 12)  cout << "���⿡ " << age + 1 << "���� �ǰڱ���.";
	else if (age == 17)  cout << "���⿡�� ��ǥ�� �� �� �ְڳ׿�.";
	else if (age > 70)  cout << "���� �ĸ� �� ���� �������?";
	cout << '\n';

	// (7)
	cout << "����� ģ��, ����\n\n";
}