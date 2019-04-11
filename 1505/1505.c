#include <stdio.h>

int main()
{
    int max = 0;
    int dal[50][50] = { '\n' };
    int i, x = 0, y = -1;
    int t = 1, p, cnt = 1, jmax;
    
    scanf("%d",&p);
    max = p;
    
    jmax = max;
    while(0 <= jmax)
    {
        for(i = 0;i < jmax; i++)
        {
            y = y + t;
            dal[x][y] = cnt;
            cnt++;
        }
        jmax--;
        for(i = 0;i < jmax; i++)
        {
            x = x + t;
            dal[x][y] = cnt;
            cnt++;
        }
        t = t* - 1;
    }
    for(x = 0; x < max; x++)
    {
        for(y = 0; y < max; y++)
        {
            printf("%d ",dal[x][y]);
        }
        printf("\n");
    }
    return 0;
}

