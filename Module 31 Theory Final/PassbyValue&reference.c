

#include <stdio.h>

// Pass By Value
void pass_by_value_swapping(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;

}

void pass_by_reference_swapping(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10,b=20;


    printf("Pass By Value \n");
    pass_by_value_swapping(a,b);

    printf("X = %d , Y = %d\n\n", a,b);

    printf("Pass By Reference \n");
    pass_by_reference_swapping(&a,&b);

    printf("X = %d , Y = %d\n\n", a,b);
    return 0;
}
/* Output
Pass By Value
X = 10 , Y = 20

Pass By Reference
X = 20 , Y = 10
*/
