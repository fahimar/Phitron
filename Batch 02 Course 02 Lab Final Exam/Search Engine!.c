#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    int t; scanf("%d",&t);
    int k=1;
    while(k<=t){
        int n,*arr,s;
        scanf("%d",&n);
        arr = (int*)malloc(n * (sizeof(int)));

        if(arr==NULL){
            return 0;
        }
        else{
            for (int i=0;i<n;i++){
               scanf("%d",arr+i);
            }

            scanf("%d",&s);// printf("S : %d\n",s);
            int f = 0;
            for (int i=0;i<n;i++){
               //     printf("arr[i] : %d\n",arr[i]);
               if(arr[i]==s){
                  printf("Case %d: %d\n",k,i+1);
                  f=1;
                  break;
               }

            }
            if(f==0){
                printf("Case %d: Not Found\n",k);
             //   break;
               }


        }


        k++;
    }
    return 0;
}
