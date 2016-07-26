#include <stdio.h>
#include <time.h>

#define bool int
#define true 1
#define false 0

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

int main(){
	srand((unsigned)time(0));
	int rand_num = rand() % 11;
	if (isUgly(rand_num))
		printf("%d is a ugly number.", rand_num);
	else
		printf("%d isn't a ugly number.", rand_num);

	// getchar();
	return 0;
}