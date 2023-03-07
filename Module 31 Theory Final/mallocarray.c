#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int N, *array;
    scanf("%d",&N);

    array = (int *)malloc(N*sizeof(int));

    for (int i=0; i<N; i++)
    {
        scanf("%d",array+i);
    }
    printf("Output array\n");
    for (int i=0; i<N; i++)
    {
        printf("%d ",*(array+i));
    }
    printf("\n");

}
