#include <stdio.h>

int main() {
    int num = 0;
    int fuck[30][30] = { '\n' };
    
    printf("> ");
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", fuck[i][j]);
        }
        printf("\n");
    }
}
