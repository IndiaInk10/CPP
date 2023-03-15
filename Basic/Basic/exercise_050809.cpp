#include "std_lib_facilities.h"

void PrintSumOfVector(int n, vector<int>& v)
{
	try {
		long long sum = 0;
		string numStr = "";

		for (int i = 0; i < n; i++)
		{
			sum += v[i];
			numStr += to_string(v[i]) + " ";
		}

		if (sum > INT_MAX || sum < INT_MIN)  error("int�� ǥ�� ������ ������ �Ѿ���ϴ�.");

		cout << "�� ���� " << n << "�� ( " << numStr << ")�� ���� " << sum << "�Դϴ�.\n";
		return;
	}
	catch (out_of_range& e) {
		cerr << "out_of_range : " << e.what() << '\n';
		return;
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return;
	}
}

int main()
{
	vector<int> nums;
	int n = 0;

	try {
		cout << "�հ踦 ���� ������ ������ �Է��ϼ��� : ";
		cin >> n;
		if (!cin)  error("�߸��� ���� �ԷµǾ����ϴ�.");


		cout << "������ �Է��ϼ��� (\'|\'�� �Է� ����) : ";
		for (long long num; cin >> num;)
		{
			if (num > INT_MAX || num < INT_MIN)  error("int�� �Է� ������ ������ �Ѿ���ϴ�.");

			nums.push_back(num);
		}

		PrintSumOfVector(n, nums);
		return 0;
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}
	
}