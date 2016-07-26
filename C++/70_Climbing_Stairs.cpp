#include <iostream>
#include <ctime>

using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		int a = 1;
		int b = 1;
		for (int i = 2; i < n + 1; i++) {
			int temp = a + b;
			a = b;
			b = temp;
		}
		return b;
	}
};

int main(){
	Solution s;
	srand((unsigned)time(0));
	int stair_num = 1 + rand() % 20;

	cout << "Number of layers: " << stair_num
		<< "\tNumber of steps: " << s.climbStairs(stair_num);

	// cin.get();
	return 0;
}