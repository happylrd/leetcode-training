#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> countBits(int num) {
		vector<int> ans;
		ans.push_back(0);
		for (int i = 1; i < num + 1; i++){
			ans.push_back(ans.at(i >> 1) + (i & 1));
		}
		return ans;
	}
};

int main(){
	Solution s;
	int num;
	cout << "Input the int: ";
	cin >> num;
	vector<int> temp = s.countBits(num);
	cout << "[";
	for (int i = 0; i < temp.size(); i++){
		cout << temp.at(i);
		if (i == temp.size() - 1)
			break;
		cout << ",";
	}
	cout << "]";

	// cin.get();
	// cin.get();
	return 0;
}