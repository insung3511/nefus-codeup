#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    float num3 = 0;
    
    printf("\n>> ");
    scanf("%d %d", &num1, &num2);
    
    
    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    printf("%d\n", num1 * num2);
    printf("%d\n", num1 / num2);
    printf("%d\n", num1 % num2);
    
    num3 = ( ( num1 * 1.0 ) / ( num2 * 1.0 ) );
    printf("%.2f\n", num3);
}
