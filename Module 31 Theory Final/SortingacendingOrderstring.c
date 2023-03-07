#include<stdio.h>

#include<string.h>
#include<stdlib.h>


void sort_string(char str[])
{

    int freq[100];
    for (int i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    int len = strlen(str);
    for (int i=0; i<len; i++)
    {
        freq[str[i]-'a']++;
    }
    for (int i=0; i<26; i++)
    {
        for (int j=0; j<freq[i]; j++)
        {
            printf("%c",(char)(i+97));
        }
    }



}

int main()
{

    char str[100];

    scanf("%s",str);

    sort_string(str);


    return 0;
}
