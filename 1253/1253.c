#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d %d", &a, &b);
    
    if( a > b ){
        for(int i = b; a > i; i++){
            printf("%d ", i);
        }
        printf("%d ", a);
    }
    else if( a < b ){
        for(int i = a; b > i; i++){
            printf("%d ", i);
        }
        printf("%d ", b);
    }
    else if(a == b){
        printf("%d", a);
    }
}

