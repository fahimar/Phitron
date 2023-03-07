#include<stdio.h>

void fibonacci(int n)
{

    if(n<3)
    {
        return 1;
    }
    else
    {
        int tmp1=0,tmp2=1;
        int nt = tmp1+tmp2;
        printf("%d, %d, ",tmp1,tmp2);
        for (int i=3; i<n; i++)
        {
            printf("%d, ",nt);
            tmp1 = tmp2;
            tmp2 = nt;
            nt = tmp1 + tmp2;
        }
        printf("%d\n",nt);
    }

    // return fibonacci(n-2)+fibonacci(n-1);


}

int main()
{


    int *ptr;
    int n;

    scanf("%d",&n);

    ptr = (int*) malloc(sizeof(int)*n);

    fibonacci(n);

    //printf("%d\n",res);

    return 0;
}
