#include<stdio.h>
#include<math.h>

int consecutive(int a[],int n){
    int i=0;
    int res[4],temp=0;
    for (i=0;i<n;i++){
       temp = a[i]/4;
       res[1] = temp-1,res[2] = temp+1;
       printf("%d %d %d %d\n",res[1]-2,res[1],res[2],res[2]+2);
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[1001];
    for (int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    consecutive(a,n);


    return 0;
}
