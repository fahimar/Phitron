#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);


    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n;k++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
