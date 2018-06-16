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

int n, m;
ll x[1000], y[1000], z[1000];


typedef struct {
    ll xx;
    ll yy;
    ll zz;
} Res;

bool f[1001][1001];
Res dp[1001][1001];

auto dfs(int num, int idx) -> Res
{
    if (f[num][idx]) {
        return dp[num][idx];
    }

    Res a, b;
    if (idx == n - 1 || num == m) {
        a = b = Res{0LL, 0LL, 0LL};
    } else {
        a =  dfs(num, idx + 1);
        b =  dfs(num + 1, idx + 1);
    }

    ll aa = abs(a.xx) + abs(a.yy) + abs(a.zz);
    ll bb = abs(b.xx + x[idx]) + abs(b.yy + y[idx]) + abs(b.zz + z[idx]);
    f[num][idx] = true;
    if (aa > bb) {
        return dp[num][idx] = a;
    } else {
        b.xx += x[idx];
        b.yy += y[idx];
        b.zz += z[idx];
        return dp[num][idx] = b;
    }
}


auto main() -> int
{
    mset(dp, -1);

    cin >> n >> m;

    REP(i, n) {
        cin >> x[i] >> y[i] >> z[i];
    }

    Res res1 = dfs(0, 0);
    ll r1 = abs(res1.xx) + abs(res1.yy) + abs(res1.zz);
    cout << r1 << endl;

    return 0;
}

