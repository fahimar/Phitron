#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,k=0;
    int n;
    scanf("%d",&t);
    while(t>0)
    {

        scanf("%d",&n);
        char c[n];
        int cnt = 0;
        //fgets(c, sizeof(c), stdin);
        scanf("%s", c);
        for (int i=0; i<n; ++i)
        {


            if((c[i]=='1'&&c[i+1]=='0')||(c[i]=='0'&&c[i+1]=='1'))
            {
                ++cnt;
            }
        }


        printf("%d\n",cnt);

        t--;
    }

    return 0;
}
