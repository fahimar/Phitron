#include<stdio.h>
#include<string.h>

/*
You have given a string. Now your task is to sort this string in descending order.
Implement this using function.
*/

void sort(char str[],int len)
{
    char t;
    int i=0,j=0;
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)N
        {
            if(str[j]<str[j+1])
            {
                t = str[j];
                str[j] = str[j+1];
                str[j+1] = t;
            }
        }
    }


    printf("%s",str);


}

int main()
{


    char s[10001];

    scanf("%s",s);

    int n = strlen(s);
    printf("%d\n",n);
    sort(s,n);




    return 0;
}
