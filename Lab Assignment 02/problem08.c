#include<stdio.h>
#include<math.h>


void solve(char ch[],int len)
{
    for (int i=0; i<len; i++)
    {
        if(i%2!=0)
        {
            printf("%c%c",ch[i],ch[i]);
        }
        else
        {
            printf("%c",ch[i]);
        }
    }

}

int main()
{
    char ch[101];
    scanf("%s",&ch);
    int len = strlen(ch);

    solve(ch,len);

    return 0;
}
