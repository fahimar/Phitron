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
    string s;

    cin >> s;
    int len = s.size();
    int cnta = 1,cntt = 0,cntg = 0,cntc = 0,mx=0;
    for (int i=0;i<len-1;i++){
       if(s[i]==s[i+1]){
          cnta++;
       }
       else{
          mx = max(cnta,mx);
          cnta = 1;
       }
//       else if(s[i]=='C'&&s[i+1]=='C'){
//          cntc++;
//       }
//       else if(s[i]=='G'&&s[i+1]=='G'){
//          cntg++;
//       }
    }
    mx = max(cnta,mx);

    cout << mx <<'\n';

    return 0;
}

