#include<stdio.h>
#include<math.h>
/*
 Divisible 3 or Divisible by 5 ?
Problem Statement
You are given an array of size n . And the next line will contain n positive integers. Now you need to tell how many numbers are divisible by 3 and divisible by 5. For this you need to write two functions , First one is for finding whether a number is divisible by 3 or not and the second one is for finding whether a number is divisible by 5 or not. See the sample input/output and explanation for more clarification.

Print the total count of how many numbers are divisible by 3 and divisible by 5 if there are no such numbers then return -1 from the functions,and that time print -1 only once(see the sample input and output)

*/
int divisible(int a[],int n){
    int i=0;
    int cnt=0;
    for (i=0;i<n;i++){
            if(a[i]%3==0||a[i]%5==0)
            {
                cnt++;
            }
    }
    if(cnt>0)
        return cnt;

    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[1001];
    for (int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int res = divisible(a,n);
    printf("%d\n",res);


    return 0;
}
