#include<stdio.h>

/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N .
Your task to print the sum of the Nth element.
*/

int main()
{

    int n;
    scanf("%d",&n);
    int sum=0;

    int k=0;
    for (int j=1,k=1; j<=n; j++)
    {
         for (;k<=3&&k<=n;k++){
                sum += k;
           // printf("%d --",k);
         }
         for (;k<=6&&k<=n;k++){
                sum -= k;
          //  printf("%d --",k);
         }
         for (;k<=9&&k<=n;k++){
                sum += k;
           // printf("%d --",k);
         }
         for (;k<=12&&k<=n;k++){
                sum -= k;
          //  printf("%d --",k);
         }
         for (;k<=15&&k<=n;k++){
                sum += k;
           // printf("%d --",k);
         }
         for (;k<=18&&k<=n;k++){
                sum -= k;
          //  printf("%d --",k);
         }
         for (;k<=21&&k<=n;k++){
                sum += k;
           // printf("%d --",k);
         }
         for (;k<=24&&k<=n;k++){
                sum -= k;
          //  printf("%d --",k);
         }





    }


    printf("%d\n",sum);

    return 0;
}
