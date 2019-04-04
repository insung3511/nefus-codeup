#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int x = 1; x <= num; x++) {
			printf("*");
		}
		printf("\n");
	}
	
	/*
	for (int i = 1; i <= 5; i++) {
		for (int z = 1; z <= i; z++) {
			printf("*");
		}
		printf("\n");
	}
	*/
	return 0;

}
