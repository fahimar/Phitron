#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){

  int t;
  scanf("%d",&t);
  getchar();

  for (int i=0;i<t;i++){
     int n;
     scanf("%d",&n);
     int c = 0;
     while(n>=1){
        c = n%10;
        printf("%c",c+'A'-1);


        n = n / 10;

     }
     printf("\n");


  }

  return 0;
}
