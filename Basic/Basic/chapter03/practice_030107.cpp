// 편지 서식 생성 프로그램(실습문제 1 ~ 7)

#include "../std_lib_facilities.h"

int main()
{
	// (1)
	cout << "편지를 받을 사람의 이름을 입력하세요:\n";
	string first_name;
	cin >> first_name;
	cout << "친애하는 " << first_name << ",\n\n";

	// (2)
	cout << " 잘 지내시죠? 저는 잘 지냅니다. 보고 싶네요.\n"
		<< "시간 나시면 Zoom으로 비대면 화상회의라도 한 번 진행했으면 좋겠네요.\n";

	// (3)
	cout << "다른 친구의 이름을 입력하세요:\n";
	string friend_name;
	cin >> friend_name;
	cout << "요즘 " << friend_name << " 만난 적 있으신가요?\n";

	// (4)
	char friend_sex;
	cout << "해당 친구가 남자면 m, 여자면 f를 입력하세요:\n";
	cin >> friend_sex;
	cout << friend_name << "을 보시거든 ";
	if (friend_sex == 'm')  cout << "그에게 ";
	else if (friend_sex == 'f') cout << "그녀에게 ";
	cout << "저한테 전화해달라고 전해주세요.\n";

	// (5)
	int age = 0;
	cout << "편지 받을 사람의 나이를 입력하세요:\n";
	cin >> age;
	cout << "얼마 전에 " << age << "번째 생일을 맞으셨단 얘기를 들었어요.\n";
	if (age <= 0 || age >= 100)  simple_error("장난치지 마세요!");

	// (6)
	if (age < 12)  cout << "내년에 " << age + 1 << "살이 되겠군요.";
	else if (age == 17)  cout << "내년에는 투표를 할 수 있겠네요.";
	else if (age > 70)  cout << "은퇴 후를 잘 즐기고 계시지요?";
	cout << '\n';

	// (7)
	cout << "당신의 친구, 장경원\n\n";
}