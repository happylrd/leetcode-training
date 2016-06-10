#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool increasingTriplet(vector<int>& nums) {
		int a = INT_MAX;
		int b = INT_MAX;
		for (int i = 0; i < nums.size(); i++){
			if (a >= nums[i])
				a = nums[i];
			else if (b >= nums[i])
				b = nums[i];
			else
				return true;
		}
		return false;
	}
};

int main(){
	Solution s;
	int temp_arr[5] = { 0, -1, 1, -3, 3 };
	vector<int> temp(temp_arr, temp_arr + 5);
	cout << s.increasingTriplet(temp);
	return 0;
}