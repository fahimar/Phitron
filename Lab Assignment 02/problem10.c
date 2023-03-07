#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*
Problem Statement:
You are given an array of size n. And the next line will contain n positive integers. Your favourite number is 7. The array will be nice if half or more of the numbers in the array have 7 digits. Implement it using a function and traverse the array using pointers.

See the sample input-output for more clarification.

Note - If the array size is odd that time  consider the ceil value as half, for example n=5, that means n/2 = 5/2 = 3


*/

void solve(char ch[],int n)
{
    int r=0,cnt=0;
    for (int i = 0; i<n; i++)
    {
         int len = strlen(ch);//printf("Ln %d\n",len);
        for (int j=0; j<len; j++)
        {
            if(ch[j]=='7')
            {
                cnt++;
            }
        }
    }
    //printf("cnt %d\n",cnt);


    double half = ceil(cnt/2.0);
    //printf("Half %lf\n",half);

    //printf("T %d\n",cnt>(int)half);
    if(cnt <= half)
    {
        printf("Ugly");
    }
    else
    {
        printf("Beautiful");
    }

}

int main()
{
    int n;
    char ch[101];
    scanf("%d",&n);
    int cnt =0;
    for (int i=0; i<n; i++)
    {
        scanf("%s",&ch[i]);

    }
     solve(ch,n);



    return 0;
}
