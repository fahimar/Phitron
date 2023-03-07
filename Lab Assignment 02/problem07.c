#include<stdio.h>
#include<math.h>

/*
Swap
Problem Statement:
You are given a positive integer n .The second line will contain n positive integers.And the third line will contain a value Q.The next line will contain Q queries,every query will contain two values L and R.Now,You need to swap two values by the following way-

>> Swap the values of index L  with R .

And lastly print the modified array.

Note - You must swap the values using a function with pointers.And Consider the array as 1 base index.

See the sample input output for more clarification.

Constraints-
2<=n<=100
Values of array will be given between 1-1000
1<=L,R<=100 and L!=R

*/

void swap(int *a1,int *a2)
{

    int t;

    t = *a1;
    *a1 = *a2;
    *a2 = t;


}

int solve(int *a,int n)
{
    int i=0;
    int cnt=0;
    int q=0,L=0,R=0;
    scanf("%d",&q);

    for (i=0; i<q; i++)
    {
        scanf("%d %d",&L,&R);
        swap(&a[L],&a[R]);
    }
    for (int i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }



}

int main()
{
    int n;
    scanf("%d",&n);
    int *a;
    a = (int *) malloc(sizeof(int) * n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",(a+i));
    }
    int res = solve(a,n);


    return 0;
}

/*
Input
7
9 1 17 3 5 2 7
4
1 3
2 4
5 3
4 6
Output: 17 3 5 2 9 1 7
*/

