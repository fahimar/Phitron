#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int n)
{

    if (n == 0)
        return 0;


    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}


int main() {

    int t; scanf("%d",&t);
    int i=0;
    while(i<t){
        int L,R;
        scanf("%d %d",&L,&R);

        for (int i=L;i<=R;i++){
           if(isPrime(i)){
            printf("%d ",i);
           }

        }
        printf("\n");

        i++;
    }
    return 0;
}
