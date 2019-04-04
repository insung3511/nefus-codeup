#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= (n-(n/2)); ++i) {
		for (int j = 1; j <=((n-(n/2))-i); ++j) {
			printf(" ");
		}
		for (int k = 1; k<=((i*2)-1); ++k){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
