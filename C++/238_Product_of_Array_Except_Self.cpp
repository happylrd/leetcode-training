#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans(n, 1);
		for (int i = 1; i < n; i++) {
			ans[i] = ans[i - 1] * nums[i - 1];
		}
		int right = 1;
		for (int i = n - 1; i >= 0; i--) {
			ans[i] *= right;
			right *= nums[i];
		}
		return ans;
	}
};

int main(){
	Solution s;
	int temp_array[4] = { 1, 2, 3, 4 };
	vector<int> temp(temp_array, temp_array + 4);
	vector<int> data = s.productExceptSelf(temp);
	cout << "[";
	for (int i = 0; i < data.size(); i++){
		cout << data.at(i);
		if (i == data.size() - 1)
			break;
		cout << ",";
	}
	cout << "]";

	// cin.get();
	return 0;
}