#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int cnt_unique(int n,char *c)
{
    int size = n,cnt = 0,i,j;
    bool rep = false;

    for ( i = 0; i < n; i++)
    {
        rep = false;
        for ( j = 0; j < n; j++)
            if (c[i]==c[j]&&i!=j)
            {
                rep = true;
            }

        if (!rep)
            cnt++;
    }

    return cnt;

}
void print_occurrences(char *s)
{
    // unique will keep track of the unique characters found so far, counted
    // will keep track of how many unique characters we've already counted
    int length = strlen(s);
    char unique[length];
    int counted = 0,cnt=0;

    // check each character in the string
    for (int i = 0; i < length; i++)
    {
        // check to see if the character at index i has already been counted
        bool already_counted = false;
        for (int j = 0; j < counted; j++)
            if (s[i] == unique[j])
                already_counted = true;

        // if the character has already been counted, skip ahead to the next
        // iteration of the loop as we do not need to count it again
        if (already_counted) continue;

        // if we haven't already counted the character, count it now
        int count = 0;
        for (int j = 0; j < length; j++)
            if (s[i] == s[j]&&(s[i]>='a'&&s[i]<='z')) count++;

        // output the count
//    printf("%c - %d\n", s[i], count);


        // add the character to the array of unique characters we've found so far
        unique[counted] = s[i];
        counted++;
        if(count==1)
        {
            cnt++;
        }

    }
    printf("%d\n",cnt);
}

int main()
{
    char s[101];
    int n,ctr=0;
    int i, j, k;

    scanf("%d",&n);
    getchar();
    if(n==0)
    {
        printf("0\n");
        return 0;
    }

    for(i=0; i<n; i++)
    {

        scanf("%c",&s[i]);
    }
    print_occurrences(s);

    //printf("%d\n",cnt);


    return 0;
}
