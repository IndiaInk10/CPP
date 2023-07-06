#include "../std_lib_facilities.h"

int main()
{
	int prev = 1, curr = 1;
	unsigned int next = prev + curr;
	cout << prev << '\n';
	cout << curr << '\n';

	while (next <= INT_MAX)
	{
		prev = curr;
		curr = next;
		next = prev + curr;

		cout << curr << '\n';
	}

	return 0;
}