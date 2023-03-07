#include<stdio.h>
struct Course {
    char name[20];
    int price;
};

int main()
{
    struct Course c1 ={"C Programming",5000};
    //1. What will be stored in c1.name?
    printf("%s %d",c1.name,c1.price);
    return 0;
}
