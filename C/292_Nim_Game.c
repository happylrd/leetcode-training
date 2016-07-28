#include <stdio.h>
#include <time.h>

#define bool int

bool canWinNim(int n) {
	return n % 4 != 0;
}

int main(){
	srand((unsigned)time(0));
	int stone_num = rand() % 1000;

	if (canWinNim(stone_num))
		printf("When the number of stones are %d, first win!", stone_num);
	else
		printf("When the number of stones are %d, second win!", stone_num);

	// getchar();
	return 0;
}