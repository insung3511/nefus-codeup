#include<stdio.h>

int main(void)
{
    int row, column;
    scanf("%d %d", &row, &column);
    int alist[100][100];
    int number = 1;
    
    int i, j;
    for (j = column - 1; j >= 0; j--)
    {
        for (i = 0; i < row; i++)
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

