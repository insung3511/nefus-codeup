#include <stdio.h>
int main()
{
    int n, cnt;
    scanf("%d", &n);
    cnt = 1;
    for(int i = 1; i <= n; i++)
    {
        cnt += n;
        if(i % 2 == 0)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", cnt++);
            }
        }
        else
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", --cnt);
            }
        }
        printf("\n"); 
    }
}