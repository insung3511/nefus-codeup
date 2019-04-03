#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d", &a);
    
    if ( a < 0 ) {
        printf("minus\n");
    }
    
    else if ( a > 0 ) {
        printf("plus\n");
    }
    
    //Others
    if ( a % 2 == 0 ) {
        printf("even\n");
    }
    
    else if ( a % 2 == 1 ) {
        printf("odd\n");
    }
    
    
    return 0;
}

