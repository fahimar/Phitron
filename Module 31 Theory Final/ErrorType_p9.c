#include<stdio.h>
#include<stdlib.h>

struct student{
  char name[100];
  int roll;
  int mark;
};

void Main() // Linked Error
{

    struct student stu , *ptr;

    printf("Enter information: ");
    printf("\nEnter name: ");


    printf("\n\nDisplay Information: \n");
    ptr = &stu       //Syntex error
    int val,b,c,d;
    val = 100/0; // Run time error
    float A = 10;
    if(A = 0){ // Logical Error
        printf("Division by zero is not possible\n");
    }

    b*c*d = A; // Semantic Error

    printf("Name: %s\nVal = %d\n",ptr->name,val);


    return 0;
}
