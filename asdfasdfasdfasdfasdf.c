#include <stdio.h>

int main() {
	int arr[100][100] = { '\n' };
	int temp = 0;
	int stop = 0;
	int i, j, y = 1;
	int a1, a2 = 0;
	int change = 1;

	printf("> ");
	scanf("%d", &temp);

	stop = temp;
	for (i = 0; i < stop; i++) {
		for (j = 0; j < stop; j++) {
			a2 += change;
			arr[a1][a2] = y;
			y++;
		}
		
		stop -= 1;

		for (j = 0; j < stop; j++) {
			a1 += change;
			arr[a1][a2] = y;
			y++;
		}
		change = -change;
	}

	for (int wow = 0; wow < temp; wow++) {
		for (int mom = 0; mom < temp; mom++) {
			printf("%d", arr[a1][a2]);
		}
		printf("\n");
	}

	return 0;
}
