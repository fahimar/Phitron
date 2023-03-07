#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct pair
{
    int min;
    int max;
};

struct pair getMinMax(int arr[], int low, int high)
{
    struct pair minmax, mml, mmr;
    int mid;


    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }


    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }


    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);


    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;


    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}


int main()
{
    long long arr[2010],sot[5];
    long long n,k=1 ;
    long long tc;


    scanf("%lld",&tc);
    if(tc==0)
    {
        return 0;
    }
    while(tc>=k)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            return 0;
        }

        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        struct pair minmax = getMinMax(arr, 0, n - 1);
        sot[0] = minmax.max*minmax.max;
        sot[1] = minmax.min*minmax.min;
        sot[2] = minmax.max+minmax.max;
        sot[3] = minmax.min+minmax.min;
        for (int i=0; i<4; i++)
        {
            for (int j=i+1; j<4; j++)
            {
                if (sot[i] < sot[j])
                {
                    int t = sot[i];
                    sot[i] = sot[j];
                    sot[j] = t;
                }
            }
        }
        if(abs(min)>abs(max))
            printf("%lld %lld %lld %lld\n",sot[1],sot[0],sot[2],sot[3]);
        else
            printf("%lld %lld %lld %lld\n",sot[0],sot[1],sot[2],sot[3]);
      //  printf("%d %d %d %d",sot[0],sot[1],sot[2],sot[3]);
        if(tc==k)
        {
            break;
        }
        else
        {
            printf("\n");
        }
        k++;

    }

    return 0;
}
