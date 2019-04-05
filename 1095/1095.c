#include <stdio.h>

int main() {
    int i = 0;
    int wow, num = 0;
    int asdf[100] = { '\n' };
    
    printf("> ");
    scanf("%d", &num);
    
    for (i = 0; i <= num - 1; i++) {
        scanf("%d", &asdf[i]);
    }
    
    
    for (i = 0; i <= num; i++) {
        if (asdf[i] < asdf[i + 1]) {
            wow = asdf[i];
            printf("wow = %d\nI = %d\n", asdf[i], i);
        }
    }
    
    printf("%d\n", wow);
    
    return 0;
    
}
