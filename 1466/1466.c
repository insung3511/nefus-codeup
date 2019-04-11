#include<stdio.h>

int main(void)
{
    int row, column;
    scanf("%d %d", &row, &column);
    int alist[100][100];
    int number = 1;
    
    int i, j;
    //Code
    for (j = column - 1; j >= 0; j--) //열 중심 감소방향
    {
        for (i = row - 1; i >= 0; i--) //행 감소방향
        {
            alist[i][j] = number;
            number++;
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", alist[i][j]);
        }
        printf("\n");
    }
    return 0;
}

