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

int main()
{
    ll n;
    cin >> n;
    cout<<n<<" ";
    while(n>1)
    {

        if(n&1)
        {
           n = (n*3)+1;cout<<n<<" ";
        }
        else{
            n = n/2;cout<<n<<" ";
        }



    }



    return 0;
}
