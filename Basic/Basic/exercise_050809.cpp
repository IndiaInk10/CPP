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

		if (sum > INT_MAX || sum < INT_MIN)  error("int로 표현 가능한 범위를 넘어섰습니다.");

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

int main()
{
	vector<int> nums;
	int n = 0;

	try {
		cout << "합계를 구할 숫자의 개수를 입력하세요 : ";
		cin >> n;
		if (!cin)  error("잘못된 값이 입력되었습니다.");


		cout << "정수를 입력하세요 (\'|\'로 입력 종료) : ";
		for (long long num; cin >> num;)
		{
			if (num > INT_MAX || num < INT_MIN)  error("int로 입력 가능한 범위를 넘어섰습니다.");

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