#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    for ( int i = 1; i <= num; i++ ) {
        for ( int j = 1; j <= i; j++ ){
            printf("*");
        }
        
        printf("\n");
        
    }
    for ( int i = 2; i <= num; i++ ) {
        for ( int j = num; j >= i; j--) {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    return 0;
    
}

