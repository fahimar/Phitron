#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>


int main()
{
    int n=0,maxx = 0;
    scanf("%d",&n);
     if(n==0){
        printf("%d\n",0);
            return 0;
    }
    int a[n+1],e=0,o=0,first, second, first_odd, second_odd;
    first = second = INT_MIN;
    first_odd = second_odd = INT_MIN,maxx=INT_MIN;
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);



        if(a[i]>maxx){
                if(a[i]%2==0)
            maxx = a[i];
        }
        if(a[i]%2==0)
        {
            e++;
       //    printf("%d ",e);

        }
        else
        {
            o++;

        }
        if(n==1)
        {
            printf("%d\n",a[i]);
            return 0;
        }

    }
    for (int i=0;i<n;i++){
       if((n==2&&o==e))
        {
            if(a[0]%2==0){
                printf("%d\n",a[i]);
                return 0;
            }
            if(a[i]%2==0)
            {
                //cout<<a[i]<<'\n';
                printf("%d\n",a[i]);
                return 0;
            }

        }

    }
 //   printf("Max = %d\n",maxx);

    for (int j=0; j<n; j++)
    {
        if(a[j]%2==0)
        {
            if(a[j] > first)
            {
                second = first;
                first = a[j];
            }
            else if(a[j] > second && a[j] != first)
            {
                second = a[j];
            }

        }


    }
    for (int i=0; i<n; i++)
    {
        if(a[i]&1)
        {
            if(a[i] > first_odd)
            {
                second_odd = first_odd;
                first_odd = a[i];
            }
            else if(a[i] > second_odd && a[i] != first_odd)
            {
                second_odd = a[i];
            }
        }

    }



    if((first+second>first_odd+second_odd)&&(first+second)>maxx)
    {
        // printf("The second largest element is %d\n", second+first);
        printf("%d\n", second+first);

    }
    else if((first+second<first_odd+second_odd)&&(first_odd+second_odd)>maxx)
    {
        printf("%d\n", second_odd+first_odd);

    }else{
      printf("%d\n",maxx);

    }
    // printf("The second largest element is %d\n", second_odd+first_odd);




    return 0;
}
