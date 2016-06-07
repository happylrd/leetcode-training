#include <iostream>

using namespace std;

class Solution {
public:
	int addDigits(int num) {
		while (num > 9){
			int temp_sum = 0;
			while (num != 0){
				temp_sum += num % 10;
				num /= 10;
			}
			num = temp_sum;
		}
		return num;
	}
	int addDigits2(int num){
		if (num == 0)
			return 0;
		return (num - 1) % 9 + 1;
	}
};

int main(){
	Solution s;
	cout << s.addDigits(38);
	return 0;
}