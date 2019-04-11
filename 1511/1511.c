#include <stdio.h>

int main(void)
{
    int n, i, j, num=1, sum=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
                sum += num;
            num++;
        }
    }
    printf("%d\n", sum);
    return 0;
}