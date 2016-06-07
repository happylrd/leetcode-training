#include <stdio.h>

int titleToNumber(char* s) {
	int ans = 0;
	for (int i = 0; i < strlen(s); i++){
		ans = ans * 26 + s[i] - 'A' + 1;
	}
	return ans;
}

int main(){
	char s[] = "AB";
	printf("%d", titleToNumber(s));
	// getchar();
	return 0;
}