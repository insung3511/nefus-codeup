#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    if ( a % 2 == 0 ) {
        printf("%d\n", a);
    }
    
    if ( b % 2 == 0 ) {
        printf("%d\n", b);
    }
    
    if ( c % 2 == 0 ) {
        printf("%d\n", c);
    }
    
    return 0;
}

