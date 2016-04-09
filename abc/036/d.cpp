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

constexpr ll mod = static_cast<int>(pow(10, 9)) + 7;
vi g[100000];
ll dp[100000], dp2[100000];

auto dfs(int p, int x) -> void
{
    int i;

    vi child;
    for ( auto i = 0; i < g[x].size(); i++ ) {
        int y = g[x][i];
        if ( y != p ) {
            child.pb(y);
        }
    }

    for ( auto i = 0; i < child.size(); i++ ) {
        dfs(x, child[i]);
    }

    ll prod = 1;
    for ( auto i = 0; i < child.size(); i++ ) {
        prod = prod*dp[child[i]] % mod;
    }
    dp2[x] = prod;

    ll prod2 = 1;
    for ( auto i = 0; i < child.size(); i++ ) {
        prod2 = prod2*dp2[child[i]] % mod;
    }
    dp[x] = (dp2[x] + prod2) % mod;
}


auto main() -> int
{
    int n;
    cin >> n;

    REP(i, n-1) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    dfs(-1, 0);
    cout << dp[0] << endl;

    return 0;
}

