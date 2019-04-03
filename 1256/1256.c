#include<stdio.h>

int main(void) {
    int num = 0;
    scanf("%d", &num);
    while(num) {
        printf("*");
        num--;
    }
    
    return 0;
    
}

