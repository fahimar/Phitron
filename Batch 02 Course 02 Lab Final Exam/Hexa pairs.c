

#include <stdio.h>
#include <string.h>
#include <math.h>


// Function to return gcd of a and b
int gcd(int a, int b)
{
    // Base Case
    if (a == 0)
        return b;

    // Recursive GCD
    return gcd(b % a, a);
}

// Function to calculate the sum of all
// numbers till N that are coprime with N
int findSum(int a[], int N)
{
    // Stores the resultant sum
    unsigned int sum = 0;


    // int len =  pow(2,N);
    //  printf("len -> %d\n",len);
    for (int i = 1; i <= N; i++)
    {

        // If gcd is 1
        for (int j=1; j<=N; j++)
        {
//
//              printf("%d %d\n",a[i],a[j]);
//               printf("%d %d\n",a[j],a[i]);
            if((gcd(a[i],a[j])==1||gcd(a[j],a[i])==1)&&i!=j)
                sum++;
        }


        // Update sum

        //printf("gcd(a[i], a[j] %d \n",gcd(a[i], a[j]));
        //


    }

    // Return the final sum
    return sum;
}

// Driver Code
int main()
{
    int t;
    scanf("%d",&t);

    int N = 0,cs = 0;
    while(cs<t)
    {

        scanf("%d",&N);
        if(N<=1)
        {
            return 0;
        }
        int a[N+1];

        for (int i=1; i<=N; i++)
        {
            scanf("%d",&a[i]);
        }
        cs++;
        printf("%d\n",findSum(a,N));

    }
    return 0;
}
