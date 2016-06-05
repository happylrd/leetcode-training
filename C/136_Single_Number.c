#include <stdio.h>
int singleNumber(int* nums, int numsSize) {
	int ans = 0;
	for (int i = 0; i < numsSize; i++){
		ans ^= nums[i];
	}
	return ans;
}

int main(){
	int temp[] = { 1, 1, 2, 3, 3, 4, 4, 5, 5 };
	printf("%d", singleNumber(temp, sizeof(temp) / sizeof(temp[0])));
	return 0;
}