#include<stdio.h>
#include<stdlib.h>

int main()
{


    int m,n;
    scanf("%d %d",&n,&m);
    int mat_1[n][m],mat_2[n][m];
    for (int r=0; r<n; r++)
    {
        for (int c=0; c<m; c++)
        {
            scanf("%d",&mat_1[r][c]);
        }
    }
    for (int r=0; r<n; r++)
    {
        for (int c=0; c<m; c++)
        {
            scanf("%d",&mat_2[r][c]);
        }
    }
    printf("\n");
    for (int r=0; r<n; r++)
    {
        for (int c=0; c<m; c++)
        {
            printf("%d ",mat_1[r][c]+mat_2[r][c]);
        }
        printf("\n");
    }




    return 0;
}
