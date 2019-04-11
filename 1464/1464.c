#include <stdio.h>

int main() {
	int bear, fish = 0;
	scanf("%d %d", &bear, &fish);
	int count = 0;
	int num[100][100] = { '\n' };

	count = bear * fish;
	for (int i = 0; i < bear; i++) {
		for (int j = fish; j > 0; j--) {
			num[i][j] = count;
			count--;
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
