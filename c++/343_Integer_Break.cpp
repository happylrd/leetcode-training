#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
	int integerBreak(int n) {
		int div = n / 3;
		if (div <= 1) {
			return (n / 2) * (n / 2 + n % 2);
		}

		int mod = n % 3;
		if (mod == 0) {
			return (int)pow(3, div);
		}
		else if (mod == 1) {
			return (int)(pow(3, div - 1) * 4);
		}
		else {  // mod == 2
			return (int)(pow(3, div) * 2);
		}
	}
};

int main(){
	Solution s;
	cout << s.integerBreak(10);
	return 0;
}