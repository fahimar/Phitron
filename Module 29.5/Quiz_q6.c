//7. What will be the answer of c1.name?
#include<stdio.h>
struct Course {
    //char name[]; Error
    char name[22];
    int price;
};

int main()
{
    struct Course c1 ={"C Programming",5000};
    printf("%s",c1.name);
    return 0;
}

