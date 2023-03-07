// ///Distance between the two points d = root((x2 – x1)² + (y2 – y1)²)
#include<stdio.h>
#include<math.h>
struct point{
   int x;
   int y;
};

double distance(struct point p1,struct point p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
int main()
{
    struct point p1,p2;

    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);

    double dis = distance(p1,p2);
    printf("The distance between them = %lf\n",dis);

    return 0;
}
/*
Input
3 2
9 7
Output
The distance between them = 7.810250
*/
