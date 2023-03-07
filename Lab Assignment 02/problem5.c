#include<stdio.h>
#include<math.h>
/*
Sum of Odd Odd, Even Even
Problem Statement
You are given a positive integer n. The second line will contain n positive integers.
Write a function that will take an integer array as an argument and return the sum in the following way.
>> If the index is odd and at the same time the value is odd then you can add the index and values
>> If the index is even and at the same time the value is even then you can add the index and values


Return the total sum from the function. If there is no such value which is mentioned in the above then return 0 from the function.
*/
int sum_o_e(int a[],int n){
    int i=0;
    int res[4],sum=0;
    for (i=1;i<=n;i++){
       if((a[i]%2==0&&i%2==0)||(a[i]&1 && i&1))
       {
           sum +=  i+a[i];
           //printf("%d\n",sum);
       }


    }


    if(sum==0){
        return 0;
    }
    return sum;

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[101];
    for (int i=1;i<=n;i++){
       scanf("%d",&a[i]);
    }
    int res = sum_o_e(a,n);

    printf("%d\n",res);

    return 0;
}
   // 6    12 19 3 1 6 10
