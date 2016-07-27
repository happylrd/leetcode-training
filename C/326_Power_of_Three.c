#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <time.h>

#define bool int
#define true 1
#define false 0

bool isPowerOfThree(int n) {
	if (n < 1)
		return false;

	while (n % 3 == 0) {
		n /= 3;
	}

	return n == 1;
}

bool isPowerOfThree2(int n) {
	/*
	  1162261467:
	    pow(3, (int)(log10(INT_MAX) / log10(3)))
	  */
	return n > 0 && 1162261467 % n == 0;
}

int main(){
	srand((unsigned)time(0));
	int rand_num = rand() % 1000;
	if (isPowerOfThree(rand_num))
		printf("%d is power of three.", rand_num);
	else
		printf("%d isn't power of three.", rand_num);

	// getchar();
	return 0;
}