#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int y = 0;
		for (int i = 0; i < nums.size(); i++){
			if (nums[i]){
				int temp = nums[i];
				nums[i] = nums[y];
				nums[y] = temp;
				y++;
			}
		}
	}
};

int main(){
	Solution s;
	int temp_arr[5] = { 0, 1, 0, 3, 12 };
	vector<int> temp(temp_arr, temp_arr + 5);
	s.moveZeroes(temp);
	cout << "[";
	for (int i = 0; i < temp.size(); i++){
		cout << temp[i];
		if (i == temp.size() - 1)
			break;
		cout << ",";
	}
	cout << "]";
	return 0;
}