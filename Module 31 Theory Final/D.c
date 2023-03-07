#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//char islower(char str[]){
//
//
//    return str;
//
//}

int main()
{
	char str[1001];// = "AbcyuchAmPionSdyz";
	scanf("%s",str);
//	char s[1001];
	int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
	char search[] = "champions";
	char *ptr = strstr(str, search);

	if (ptr != NULL)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}
