#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		int diff = 0;
		for (int num : nums) {
			diff ^= num;
		}

		// Divided into two groups according to the last non-zero bit
		diff &= -diff;

		vector<int> ans(2, 0);
		for (int num : nums) {
			if ((num & diff) == 0) {
				ans[0] ^= num;
			}
			else {
				ans[1] ^= num;
			}
		}
		return ans;
	}
};

int main(){
	Solution s;
	int temp_arr[6] = { 1, 2, 1, 3, 2, 5 };
	vector<int> temp(temp_arr, temp_arr + 6);
	vector<int> data = s.singleNumber(temp);
	cout << "[";
	for (int i = 0; i < data.size(); i++){
		cout << data[i];
		if (i == data.size() - 1)
			break;
		cout << ",";
	}
	cout << "]";

	// cin.get();
	return 0;
}