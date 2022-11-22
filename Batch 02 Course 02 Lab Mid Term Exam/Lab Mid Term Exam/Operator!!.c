#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[21];
    long long int a,b;
    scanf("%s",&s);
    scanf("%lld %lld",&a,&b);
    int len = strlen(s);
   //  printf("%lld\n",len);
     int sum = 0;
    for (int i=0; i<len; i++)
    {
        if(s[i]=='+')
            sum += (a+b);
           // printf("%lld\n",a+b);

        else if(s[i]=='*')
            sum += (a*b);

    }
    printf("%lld\n",sum);

    return 0;
}

