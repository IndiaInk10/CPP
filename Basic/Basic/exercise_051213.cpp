// ���ҿ� �ϼ� ����

#include "std_lib_facilities.h"

int FindInVector(vector<int>& v, int n)
{
	vector<int>::iterator vi = find(v.begin(), v.end(), n);

	if (vi == v.end())  return -1;
	else
		return distance(v.begin(), vi);
}

int main()
{
	vector<int> nums(4);
	vector<bool> tenNums(10);
	int rand = 0, seed = 0, maleCow = 0, femaleCow = 0, index = 0;
	string input = "";

	try {
		cout << "���� ���� �� ���� ������ �õ带 �Է��ϼ��� : ";
		cin >> seed;
		if (!cin)  error("�߸��� ���� �Է��Ͽ����ϴ�.");
		srand(seed);

		for (int i = 0; i < nums.size(); i++)
		{
			rand = randint(9);
			// bool type vector���� [] operator�� ��� �Ұ���
			while (tenNums.at(rand))  rand = randint(9);
			nums[i] = rand;
			tenNums.at(rand) = true;
		}

		/*cout << "���� : ";
		for (int num : nums) cout << num;
		cout << '\n';*/

		for (;;)
		{
			maleCow = 0, femaleCow = 0;

			cout << "�����ϴ� �� ���� ������ �Է��ϼ��� : ";
			cin >> input;
			if(input.size() > 4) error("�߸��� ���� �Է��Ͽ����ϴ�.");
			for (char c : input)
			{
				if(c < 48 || c > 57)  error("�߸��� ���� �Է��Ͽ����ϴ�.");
			}

			for (int i = 0; i < input.size(); i++)
			{
				index = FindInVector(nums, input[i] - '0');
				if (index != -1)
				{
					if (index == i)  maleCow++;
					else femaleCow++;
				}
			}

			if (maleCow == nums.size())
			{
				cout << "�����Դϴ�!\n";
				break;
			}
			else  cout << "���� " << maleCow << "������ �ϼ� " << femaleCow << "����\n";
		}
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}

	return 0;
}