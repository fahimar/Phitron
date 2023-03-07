#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}


int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}
int main()
{

    int tc,k=0,n;
    scanf("%d",&tc);

    while(tc>k)
    {
        int a[200009],mxSum=-2147483647 - 1, mnSum=2147483647,mxPro=-2147483647 - 1, mnPro=2147483647;

        int greaterPositive=-2147483647 - 1, greaterNegative=2147483647, smallerPositive=2147483647, smallerNegative=-2147483647 - 1;
        bool pos=false,neg=false;

        scanf("%d",&n);

        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=0; i<n; i++)
        {



            if(a[i]>=0)
            {
                greaterPositive=max(greaterPositive,a[i]);
                smallerPositive=min(smallerPositive,a[i]) ;
                pos=true;
            }
            else
            {
                greaterNegative=min(greaterNegative,a[i]) ;
                smallerNegative = max(smallerNegative,a[i]) ;
                neg=true;
            }
        }
        if(pos)
        {
            mxSum=greaterPositive*2;
            mxPro=greaterPositive*greaterPositive;
            mnSum=smallerPositive*2;
            mnPro=smallerPositive*smallerPositive;
        }
        if(neg)
        {
            mxPro=max(mxPro, greaterNegative*greaterNegative) ;
            mxSum=max(mxSum,smallerNegative*2) ;
            mnSum=min(mnSum,greaterNegative*2) ;

            if (pos)
            {

                mnPro=greaterNegative*greaterPositive;
            }
            else
            {

                mnPro=smallerNegative*smallerNegative;
            }




        }
        printf("%d %d %d %d\n",mxPro,mnPro,mxSum,mnSum) ;
        k++;
    }



    return 0;
}
