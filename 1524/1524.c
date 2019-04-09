//아직 수정 중입니다! 
#include <stdio.h>
int main() {
    int mine[9][9];
    int maybethis, orthis = 0;
    int maybecount = 0;
    int orcount = 0;
    
    printf("> ");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &mine[i][j]);
        }
    }
    
    scanf("%d%d", &maybethis, &orthis);
    printf("%d\n", mine[maybethis][orthis]);
    printf("=============\n");
    
    for (int i = 0; i < 9; i++) {
        maybecount += mine[i][orthis];
    }
    
    for (int i = 0; i < 9; i++) {
        orcount += mine[maybethis][i];
    }
    
    printf("%d\n", maybecount + orcount);
    
    return 0;
    
}

