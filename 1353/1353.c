#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int z = 1; z <= i; z++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}
