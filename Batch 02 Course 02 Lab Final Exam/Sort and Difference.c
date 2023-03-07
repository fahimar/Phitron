
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int n;//, *a, *b;

    scanf("%d", &n);
    getchar();

    //  a = (int*)malloc(n*sizeof(int));

    // b = (int*)malloc(n*sizeof(int));
    int a[101],b[101];

    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    int temp = 0;
    for(int i = 0; i < n - 1; i++)
    {


        for(int j = 0; j < n - i - 1; j++)
        {

            if(a[j] > a[j + 1])
            {

                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;

            }

        }

    }
    for(int i = 0; i < n - 1; i++)
    {


        for(int j = 0; j < n - i - 1; j++)
        {

            if(b[j] < b[j + 1])
            {

                temp = b[j];

                b[j] = b[j + 1];

                b[j + 1] = temp;

            }

        }

    }


    for (int i=0; i<n; i++)
    {
        printf("%d ",a[i]-b[i]);
    }



    return 0;
}
