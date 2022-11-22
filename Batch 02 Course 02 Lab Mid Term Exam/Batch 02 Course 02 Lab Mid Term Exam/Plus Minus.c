#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

    int n;
    scanf("%d",&n);
    char c[n+1];
    if(n==0){
        return 0;
    }
    if(n==1){
        scanf("%s", c);
        puts("1");return 0;
    }

    scanf("%s", c);
    int p=0,m=0,maxx=0,cnt=1;
    for (int i=0;i<n-1;i++){

        if(c[i]==c[i+1]){

                cnt++;

        }else{
            if(cnt>maxx){
                maxx = cnt;
            }

               cnt = 1;
        }



// printf("%d\n",cnt);



    }
    if(maxx>cnt){
        printf("%d\n",maxx);
    }else{
        puts("1");
    }



    return 0;
}
