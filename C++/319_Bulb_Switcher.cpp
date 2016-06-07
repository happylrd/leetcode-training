#include <iostream>

using namespace std;

class Solution {
public:
	int bulbSwitch(int n) {
		return (int)sqrt(n);
	}
};

int main(){
	Solution s;
	cout << s.bulbSwitch(5);
	// final state: 1 0 0 1 0, n = 2
	return 0;
}