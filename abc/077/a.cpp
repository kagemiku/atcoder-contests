#include <bits/stdc++.h>
#define FOR(i,a,b)  for(int (i)=(a);(i)<(b);(i)++)
#define REP(i,n)    FOR(i,0,n)
#define RER(i,n)    FOR(i,0,(n+1))
#define pb          push_back
#define mp(a,b)     make_pair((a),(b))
#define mset(m,v)   memset(m,v,sizeof(m))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;
typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pair<ll, ll> > vpll;
typedef vector<string> vs;
typedef long double ld;
const double EPS    = 1e-10;
const int INF       = 1e+9;
const double PI     = acos(-1);


auto main() -> int
{
    string s1, s2;
    cin >> s1 >> s2;
    if ( s1[0] == s2[2] && s1[1] == s2[1] && s1[2] == s2[0] ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

