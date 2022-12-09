#include<stdio.h>
int value=3;
void foo(int n)
{
    value*=2;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[1001];
    for (int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int *p[1001];
    for (int i=0;i<n;i++){
       p[i] = &a[i];
    }
    for (int i=0;i<n;i++){
     printf("%d ",*p[i]);
    }


    return 0;
}
