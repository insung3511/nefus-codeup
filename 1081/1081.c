#include <stdio.h>

int main() {
    int num1, num2 = 0;
    scanf("%d%d", &num1, &num2);
    
    for ( int i = 1; i <= num1; i++ ) {
        for ( int j = 1; j <= num2; j++ )  {
            printf("%d %d\n", i, j);
        }
    }
    
    
    /*
    for(i=1; i<=n; i++)
    {
        for( j = 1; j <= m; j++)
        {
            printf("%d %d ", i, j);
        }
    }
}

*/
    
}

