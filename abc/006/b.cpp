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

int mod = 10007;
int m[1000001];

auto tri(int n) -> int
{
    if ( m[n] != -1 ) {
        return m[n];
    }

    if ( n <= 2 ) {
        return 0;
    } else if ( n == 3 ) {
        return 1;
    }

    return m[n] = (tri(n - 1) % mod  + tri(n - 2) % mod + tri(n - 3) % mod) % mod;
}


auto main() -> int
{
    int n;
    cin >> n;

    mset(m, -1);
    cout << tri(n) << endl;

    return 0;
}

