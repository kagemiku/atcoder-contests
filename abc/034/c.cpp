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

const int maxWH = 100000;
const int mod = 1000000007;
int g[maxWH + 1];

auto main() -> int
{
    int w, h;
    cin >> w >> h;

    mset(g, 0);
    g[0] = 1;

    for ( auto i = 0; i < h; i++ ) {
        for ( auto j = i; j < w; j++ ) {
            if ( i == 0 && j == 0 ) {
                continue;
            }
            if ( i == j ) {
                g[j] = (2*g[j]) % mod;
            } else {
                int phv = 0, pvv = 0;
                if ( i > 0 ) {
                    pvv = g[j] % mod;
                }
                if ( j > 0 ) {
                    phv = g[j - 1] % mod;
                }
                g[j] = (pvv + phv) % mod;
            }
        }
    }

    cout << g[w - 1] << endl;

    return 0;
}

