#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ans = 0;
		for (int i = 0; i < nums.size(); i++){
			ans ^= nums.at(i);
		}
		return ans;
	}
};

int main(){
	Solution s;
	vector<int> temp;
	for (int i = 0; i < 10; i++){
		temp.push_back(i);
		if (i != 2)
			temp.push_back(i);
	}
	cout<<s.singleNumber(temp);

	// cin.get();
	return 0;
}