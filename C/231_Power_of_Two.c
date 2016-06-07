#include <stdio.h>

#define bool int

bool isPowerOfTwo(int n) {
	return n > 0 && (n & (n - 1)) == 0;
}

int main(){
	printf("%d", isPowerOfTwo(8));
	// getchar();
	return 0;
}