
#include<stdio.h>
struct check
{
    int num; // small data type first
    double x;
    float f;
};
struct check1
{
    double x; // large data type first
    int num;
    float f;
};
int main()
{
    printf("Size of small data type first:%d \nSize large data type first: %d\n", sizeof(struct check), sizeof(struct check1));

    return 0;
}
/*Output:
Size of small data type first:24
Size large data type first: 16
*/
