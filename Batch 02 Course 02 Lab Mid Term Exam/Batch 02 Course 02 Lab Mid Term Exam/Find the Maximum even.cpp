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
    int n,maxx = 0;
    cin >> n;
    int v[n+1],odd[n],even[n];
    int e=0,o=0;
    for (int i=0; i<n; ++i)
    {

        cin >> v[i];
        if(n==2){
            if(v[i]%2==0){
                cout<<v[i]<<'\n';
                return 0;
            }
        }
        if(v[i]&1)
        {
            o++;
            odd[i] = v[i];
        //    cout<<"o"<<o<<'\n';
        }
        else
        {
            e++;
            even[i] = v[i];
         //  cout<<"e"<<e<<'\n';
        }
    }
    sort(v,v+n);
    sort(odd,odd+n);
    sort(even,even+n);
    int o_max=0,e_max=0;
    for (int i=0; i<n; ++i)
    {

        if(o>=2)
        {
            o_max = max(o_max,odd[i]);
        }
        else if(e>=2)
        {
            e_max = max(e_max,even[i]);
        }
        if(e_max>o_max)
        {
            cout<<even[e-2]+even[e-1]<<'\n';
            break;
        }
        else
        {
            cout<<odd[o-2]+odd[o-1]<<'\n';
            break;
        }

    }



    return 0;
}
