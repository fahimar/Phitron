#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n;
    scanf("%lld",&n);
    if(n>3&&n%3==0)
    printf("%lld\n",n/3);
    else
    puts("-1");
    return 0;
}
