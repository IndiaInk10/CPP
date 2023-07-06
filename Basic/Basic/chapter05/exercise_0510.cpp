#include "../std_lib_facilities.h"

void PrintSumOfVector(int n, vector<double>& v)
{
	try {
		long double sum = 0.0;
		string numStr = "";

		for (int i = 0; i < n; i++)
		{
			sum += v[i];
			numStr += to_string(v[i]) + " ";
		}

		if (sum > DBL_MAX || sum < DBL_MIN)  error("double�� ǥ�� ������ ������ �Ѿ���ϴ�.");

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

bool CheckAllSameValue(vector<double>& v,  vector<double>& d)
{
	bool bSame = false;

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] == v[i + 1] && bSame == false)  bSame = true;
		d.push_back(abs(v[i] - v[i+1]));
	}

	return bSame;
}

int main()
{
	vector<double> nums;
	vector<double> diffs;
	int n = 0;

	try {
		cout << "�հ踦 ���� ������ ������ �Է��ϼ��� : ";
		cin >> n;
		if (!cin)  error("�߸��� ���� �ԷµǾ����ϴ�.");


		cout << "�Ǽ��� �Է��ϼ��� (\'|\'�� �Է� ����) : ";
		for (long double num; cin >> num;)
		{
			if (num > DBL_MAX || num < DBL_MIN)  error("double�� �Է� ������ ������ �Ѿ���ϴ�.");

			nums.push_back(num);
		}

		PrintSumOfVector(n, nums);
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
	}

	if (CheckAllSameValue(nums, diffs))  cout << "vector�� ���Ұ� ���� ���� �ϳ��� �ֽ��ϴ�.\n";
	else  cout << "vector�� ��� ���Ұ� �ٸ��ϴ�.\n";

	cout << "��� ���� ���� ��\n";
	for (int i = 0; i <= diffs.size() - 1; i++)
	{
		cout << "diffs[" << i << "] - diffs[" << i + 1 << "] = " << diffs[i] << '\n';
	}

	return 0;
}