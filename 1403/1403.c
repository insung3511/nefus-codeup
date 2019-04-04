#include <stdio.h>

int main() {
	int num = 0;
	int wow[1000];
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &wow[i]);
	}

	//printf("===================\n");

	for (int i = 0; i < num; i++) {
		printf("%d\n", wow[i]);
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", wow[i]);
	}

	return 0;

}
