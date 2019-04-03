#include <stdio.h>

int main() {
    char a, b = ' ';
    scanf("%c %c", &a, &b);
    
    if( a > b ){
        for(int i = b; a > i; i++){
            printf("%c ", i);
        }
        printf("%c ", a);
    }
    else if( a < b ){
        for(int i = a; b > i; i++){
            printf("%c ", i);
        }
        printf("%c ", b);
    }
    else if(a == b){
        printf("%c", a);
    }
}

