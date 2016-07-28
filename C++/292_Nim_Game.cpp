#include <iostream>
#include <ctime>

using namespace std;

class Solution {
public:
	bool canWinNim(int n) {
		return n % 4 != 0;
	}
};

int main(){
	Solution sol;
	srand((unsigned)time(0));
	int stone_num = rand() % 1000;

	if (sol.canWinNim(stone_num))
		cout << "When the number of stones are " << stone_num << ", first win!";
	else
		cout << "When the number of stones are " << stone_num << ", second win!";

	// cin.get();
	return 0;
}