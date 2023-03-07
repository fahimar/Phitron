#include<stdio.h>
#include<math.h>

void prime_count(int* a,int n)
{
    int cnt = 0;
    int k=0;
    for (int i=2; i<=n; i++)
    {

        if((*a+i)%i!=0 )
        {
            cnt++;
        }


    }
    printf("Prime numbers: %d\n",cnt);
}

void even_sum(int* a,int n)
{
    float sum;
    float *avg;
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        if(*(a+i)%2==0)
        {
            sum += *(a+i);
          //  printf("~%d~\n",*(a+i));
            cnt++;
        }
    }
    avg = &sum;
    //printf("%d~%d",cnt,*avg);
    printf("Average of all even integers: %0.2f\n",*avg/cnt);
}

void solve(int* a,int n)
{
    prime_count(a,n);
    even_sum(a,n);

}

int main()
{
    int *a,n;
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int) *n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",(a+i));
    }
    solve(a,n);

    return 0;
}
