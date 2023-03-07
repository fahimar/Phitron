#include<stdio.h>
#include<stdlib.h>

struct student{
  char name[100];
  int roll;
  int mark;
};

int main()
{

    struct student stu , *ptr;

    printf("Enter information: ");
    printf("\nEnter name: ");
    scanf("%s",&stu.name);
    printf("\nEnter roll number: ");
    scanf("%d",&stu.roll);
    printf("\nEnter marks: ");
    scanf("%d",&stu.mark);

    printf("\n\nDisplay Information: \n");
    ptr = &stu;
    printf("Name: %s\nRoll Number: %d\nMarks: %d\n",ptr->name,ptr->roll,ptr->mark);


    return 0;
}
/*
Enter information:
Enter name: Vanya
Enter roll number: 25
Enter marks: 80
*/
