#include <iostream>
#include <cmath>
#include <climits>
#include <ctime>

using namespace std;

class Solution {
public:
	bool isPowerOfThree(int n) {
		if (n < 1)
			return false;

		while (n % 3 == 0) {
			n /= 3;
		}

		return n == 1;
	}

	bool isPowerOfThree2(int n) {
		/*
		  1162261467:
		  pow(3, int(log10(INT_MAX) / log10(3)))
		  */
		return n > 0 && 1162261467 % n == 0;
	}
};

int main(){
	Solution sol;
	srand((unsigned)time(0));
	int rand_num = rand() % 1000;

	if (sol.isPowerOfThree(rand_num))
		cout << rand_num << " is power of three.";
	else
		cout << rand_num << " isn't power of three.";

	// cin.get();
	return 0;
}