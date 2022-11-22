#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[101],s2[101],b,e;
    int t,i=1;
    scanf("%d",&t);
    getchar();
    while(i<=t)
    {
        // fgets (s1, sizeof(s1),stdin);
        //gets(s1);
        scanf("%s",&s1);
        int len = strlen(s1),ispal = 0;
//        if(len==2){
//            printf("Case #1: Not Palindrome\n");
//            return 0;
//
//        }

        int h = len-1,l=0;

        while (h > l)
        {
            if (s1[l++] != s1[h--])
            {
                //printf("%s is not a palindrome\n", str);
                 ispal = 1;
               // return;
            }
        }
        for(int k = len-1,j=0; k>=0; k--,j++)
        {

            if(j==0)
            {
                b = s1[j],e = s1[j];
                //printf("%c %c",s1[j],s1[j]);
            }


        }


//        if(strcmp(s1,s2))
//        {
//
//        }

        if(ispal==1)
        {
            printf("Case #1: Not Palindrome\n");


        }
        else
        {
            if(len <= 7)
            {
                printf("Case #3: %s\n",s1);
            }
            else
            {
                printf("Case #2: %c%d%c\n",b,len-2,b);
            }
            //   printf("Case #%d: %c%d%c\n",i,b,len-2,e);
        }

        i++;

    }



    return 0;

}
