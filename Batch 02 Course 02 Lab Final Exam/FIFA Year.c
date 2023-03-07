
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);

    if((n%100!=0||n%400==0)&&n%4==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

     return 0;
}

