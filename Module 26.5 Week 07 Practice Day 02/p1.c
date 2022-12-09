#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    float *px,*py,*pavg;



    float sum = 0.0;

    scanf("%f %f",&x,&y);

    px = &x;
    py = &y;

    sum = *px + *py;

    pavg = &sum;

    //printf("%f\n",sum);

    //printf("%f\n",(x+y));
    printf("%0.3f\n",sum/2.0);


    return 0;
}
