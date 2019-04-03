#include<stdio.h>

int main() {
    int num = 0;
    int i = 0;
    int sum = 0;
    scanf("%d", &num);
    
    i = num;
    
    for ( i = 1; i <= num; i += 1) {
        sum += i;
    }
    
    printf("%d\n", sum);
    
    return 0;
    
}

