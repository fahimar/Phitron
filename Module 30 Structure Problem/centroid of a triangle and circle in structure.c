#include <stdio.h>

struct Point{
   float x;
   float y;
   float z;//unused
};

struct triangle{
        struct Point A;
        struct Point B;
        struct Point C;
};

struct Point centroid(struct triangle t){

   struct Point  ans;
   ans.x = (t.A.x+t.B.x+t.C.x)/3;
   ans.y = (t.A.y+t.B.y+t.C.y)/3;

   return ans;

};

int main()
{
   struct Point p1 = {2, 6};
   struct Point p2 = {4, 9};
   struct Point p3 = {6, 15};

   struct triangle t = {p1,p2,p3};
   struct Point result  = centroid(t);

   printf("The centroid is (%f , %f)\n",result.x,result.y);

   return 0;
}

/*
The centroid is (4.000000 , 10.000000)
*/
