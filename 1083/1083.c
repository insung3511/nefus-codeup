#include <stdio.h>

int main() {
    int i = 0;
    int num = 0;
    scanf("%d", &num);
    for( i = 1; i <= num; i++) //1부터 100까지 반복
    {
        if( i % 3 == 0 ) {
            printf("X ");
        }
        
        else {
            printf("%d ", i);
        
        }
        
    }
}

