#include <stdio.h>
#include <time.h>

int climbStairs(int n) {
	int a = 1;
	int b = 1;
	for (int i = 2; i < n + 1; i++) {
		int temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}

int main(){
	srand((unsigned)time(0));
	int stair_num = 1 + rand() % 20;
	printf("Number of layers: %d\tNumber of steps: %d",
		stair_num, climbStairs(stair_num));

	// getchar();
	return 0;
}