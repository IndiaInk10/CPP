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

		if (sum > DBL_MAX || sum < DBL_MIN)  error("double로 표현 가능한 범위를 넘어섰습니다.");

		cout << "앞 숫자 " << n << "개 ( " << numStr << ")의 합은 " << sum << "입니다.\n";
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
		cout << "합계를 구할 숫자의 개수를 입력하세요 : ";
		cin >> n;
		if (!cin)  error("잘못된 값이 입력되었습니다.");


		cout << "실수를 입력하세요 (\'|\'로 입력 종료) : ";
		for (long double num; cin >> num;)
		{
			if (num > DBL_MAX || num < DBL_MIN)  error("double로 입력 가능한 범위를 넘어섰습니다.");

			nums.push_back(num);
		}

		PrintSumOfVector(n, nums);
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
	}

	if (CheckAllSameValue(nums, diffs))  cout << "vector의 원소가 같은 것이 하나라도 있습니다.\n";
	else  cout << "vector의 모든 원소가 다릅니다.\n";

	cout << "모든 원소 간의 차\n";
	for (int i = 0; i <= diffs.size() - 1; i++)
	{
		cout << "diffs[" << i << "] - diffs[" << i + 1 << "] = " << diffs[i] << '\n';
	}

	return 0;
}