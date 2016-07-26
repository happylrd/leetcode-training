#include <iostream>
#include <ctime>

using namespace std;

class Solution {
public:
	bool isUgly(int num) {
		if (num <= 0)
			return false;
		int arr_factors[] = { 2, 3, 5 };
		for (int i = 0; i < sizeof(arr_factors) / sizeof(arr_factors[0]); i++){
			while (num % arr_factors[i] == 0){
				num /= arr_factors[i];
			}
		}
		return num == 1;
	}
};

int main(){
	Solution s;
	srand((unsigned)time(0));
	int rand_num = rand() % 11;
	if (s.isUgly(rand_num))
		cout << rand_num << " is a ugly number.";
	else
		cout << rand_num << " isn't a ugly number.";

	// cin.get();
	return 0;
}