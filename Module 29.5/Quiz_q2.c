//2. What will be the output of the following code?Note: The size of int is 4 bytes.
#include<stdio.h>

struct st
{
    int x;
    int ar[5];
};

int main()
{
    printf("%d", sizeof(struct st));
    return 0;
}
