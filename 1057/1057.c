#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;

	scanf("%d%d", &num1, &num2);
	printf("%d", (!num1 || num2) && (num1 || !num2));

	return 0;
}
