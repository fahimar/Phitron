#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Your task is to do this operation on this matrix:

If the value matches with the current row and column number then add 3 with the value.
If the value matches with only the current row number then add 2 with the value.
If the value matches with only the current column number then add 1 with the value.*/
int main()
{
    int a[100][100],b[100][100],n,m;
    scanf("%d %d",&n,&m);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            if(a[i][j]==i&&a[i][j]==j)
            {
                b[i][j] = a[i][j]+3;
            }
            else if(a[i][j]==i)
            {
                b[i][j] = a[i][j]+2;
            }
            else if(a[i][j]==j)
            {
                b[i][j] = a[i][j]+1;
            }
            else
            {
                b[i][j] = a[i][j];
            }

        }
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            printf("%d ",b[i][j]);
        }
        puts("");
    }


    return 0;
}

