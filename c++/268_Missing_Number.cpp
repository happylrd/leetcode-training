#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int n = nums.size();
		int sum = 0;
		for (int i = 0; i < n; i++){
			sum += nums[i];
		}
		return n*(n + 1) / 2 - sum;
	}
	
	int missingNumber2(vector<int>& nums) {
		int n = nums.size();
		int a = 1, b = 1;
		for (int i = 0; i < n; i++){
			a ^= nums[i];
		}
		for (int i = 0; i < n + 1; i++){
			b ^= i;
		}
		return a ^ b;
	}
};

int main(){
	Solution s;
	int temp_arr[3] = { 0, 1, 3 };
	vector<int> temp(temp_arr, temp_arr + 3);
	cout << s.missingNumber(temp);

	return 0;
}