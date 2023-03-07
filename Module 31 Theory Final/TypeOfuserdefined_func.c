#include<stdio.h>
#include<stdlib.h>

// Function with no arguments and no return value.
void SUM_0(){
   int a=80,b=100;
    printf("%d\n",a+b);
}

// Function with no arguments and a return value.
int SUM_1(){
    int a = 80, b = 100;
   return a+b;
}

// Function with arguments and no return value.
void SUM_2(int a,int b){

    printf("%d\n",a+b);
}
// Function with arguments and a return value.
int SUM_3(int a,int b){
   return a+b;
}
int main(){

  int a=80,b=100;
  SUM_0();
  int sum_1 = SUM_1();
  printf("%d\n",sum_1);

  SUM_2(a,b);

  int sum_3 = SUM_3(a,b);
  printf("%d\n",sum_3);

  return 0;
}
