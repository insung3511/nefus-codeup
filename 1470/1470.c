#include <stdio.h>

int main() {
    int count = 0;
    int arr[100][100] = { '\n' };
    int num = 0;
    
    //printf("> ");
    scanf("%d", &count);
    
    for (int j = 0; j < count; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < count; i++) {
                num += 1;
                arr[i][j] = num;
            }
        }
        else {
            for (int i = count - 1; i >= 0; i--) {
                num += 1;
                arr[i][j] = num;
            }
        }
        
    }
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

