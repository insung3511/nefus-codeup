#include <stdio.h>
//#include<

int main() {
    char ch = ' ';
    scanf("%c", &ch);
    
    switch (ch) {
        case 'A':
            printf("best!!!\n");
            break;
        case 'B':
            printf("good!!\n");
            break;
        case 'C':
            printf("run!\n");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?\n");
            break;
    }
    
    return 0;
}

