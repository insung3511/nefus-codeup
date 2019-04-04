#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    
    while ( num != 0 ) {
        num = num - 1;
        printf("%d\n", num);
    }
}

