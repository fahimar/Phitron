#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,k=0;
    int n;
    scanf("%d",&n);
    if(n==1){
        puts("1");return 0;
    }
    for (int i=1;i<=n;i++){
        printf("%d",i);
    }
    printf("\n");

    for (int i=2;i<n;i++){
        printf("%d",i);
            for (int j=2;j<n;j++){
               printf(" ");
            }
         printf("%d\n",n);

    }
    for (int i=1;i<=n;i++){
        printf("%d",n);
    }
     printf("\n");

    return 0;
}
