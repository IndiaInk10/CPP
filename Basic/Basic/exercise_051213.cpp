// 숫소와 암소 게임

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
		cout << "랜덤 숫자 네 개를 생성할 시드를 입력하세요 : ";
		cin >> seed;
		if (!cin)  error("잘못된 값을 입력하였습니다.");
		srand(seed);

		for (int i = 0; i < nums.size(); i++)
		{
			rand = randint(9);
			// bool type vector에는 [] operator가 사용 불가능
			while (tenNums.at(rand))  rand = randint(9);
			nums[i] = rand;
			tenNums.at(rand) = true;
		}

		/*cout << "정답 : ";
		for (int num : nums) cout << num;
		cout << '\n';*/

		for (;;)
		{
			maleCow = 0, femaleCow = 0;

			cout << "추측하는 네 개의 정수를 입력하세요 : ";
			cin >> input;
			if(input.size() > 4) error("잘못된 값을 입력하였습니다.");
			for (char c : input)
			{
				if(c < 48 || c > 57)  error("잘못된 값을 입력하였습니다.");
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
				cout << "정답입니다!\n";
				break;
			}
			else  cout << "숫소 " << maleCow << "마리와 암소 " << femaleCow << "마리\n";
		}
	}
	catch (runtime_error& e) {
		cerr << "runtime_error : " << e.what() << '\n';
		return 1;
	}

	return 0;
}