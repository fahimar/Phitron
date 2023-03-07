#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll long long
typedef unsigned int uint;
typedef long long int64;
typedef unsigned long long uint64;
#define lli long long int

#define llu long unsigned int


#define FOI(i, A, B) for(i=A; i<=B; i++)
#define FOD(i, A, B) for(i=A; i>=B; i--)
#define PI        acos(-1.0)
#define INF        1<<30
#define EPS        1e-9
#define sqr(x)    (x)*(x)
#define fi first
#define se second
#define mod 998244353

#define tc int t sc cin >> t sc while(t--)
#define sc ;
using namespace std;

struct Point {
    float x;
    float y;
};

struct Point mid(struct Point m,struct Point n){
    struct Point ans;
    ans.x = (m.x+n.x)/2;
    ans.y = (m.y+n.y)/2;

    return ans;
};

int main()
{
   struct Point p1 = {1, 1} ;
   struct Point p2 = {4, 5} ;

   struct Point p3;
   p3 = mid(p1,p2);

   printf("%0.2f %0.2f\n",p3.x,p3.y);
   return 0;
}
/*
2.50 3.00
*/
