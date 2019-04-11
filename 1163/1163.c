#include <stdio.h>

int main() {
	int year, month, day = 0;
	int total = 0;
	int num = 0;

	scanf("%d %d %d", &year, &month, &day);

	total = year + month + day;
	num = total % 1000 / 100;

	if (num % 2 == 0) {
		printf("대박\n");
	}

	else {
		printf("그럭저럭\n");
	}
}
