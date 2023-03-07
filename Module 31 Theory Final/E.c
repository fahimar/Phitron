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


/* TLE ///
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    long long a[200009],i,n,sot[5];
    long long min,max;
    long long k=1;
    long long tc;


    scanf("%lld",&tc);

    while(tc>=k)
    {
        scanf("%lld",&n);


        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }

        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i] < a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        min=max=a[0];
        for(i=1; i<n; i++)
        {
            if(min>a[i])
                min=a[i];
            if(max<a[i])
                max=a[i];
        }
       // printf("%d %d ___\n",max,min);
//        if(abs(min)>abs(max))
//            printf("%lld %lld %lld %lld\n",(min*min),(max*max),max+max,min+min);
//        else
//            printf("%lld %lld %lld %lld\n",(max*max),(min*min),max+max,min+min);
    sot[0] = max*max;
    sot[1] = min*min;
    sot[2] = max+max;
    sot[3] = min+min;

    printf("%d %d %d %d",sot[0],sot[1],sot[2],sot[3]);
        if(tc==k){
            break;
        }else{
          printf("\n");
        }
        k++;

    }




    return 0;
}
*/
