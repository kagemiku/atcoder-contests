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
    ll x;
    ll y;
    ll z;
} Cake;

template<class sFunc>
auto solve(vector<Cake> c, sFunc sfunc) -> ll
{
    sort(begin(c), end(c), [sfunc](Cake a, Cake b) -> ll {
                return sfunc(a) > sfunc(b);
            });
    ll res = 0LL;
    REP(i, m) {
        // cout << "(" << c[i].x << ", " << c[i].y << ", " << c[i].z << ")" << endl;
        res += sfunc(c[i]);
    }

    return res;
}


auto main() -> int
{
    cin >> n >> m;

    vector<Cake> c;
    REP(i, n) {
        cin >> x[i] >> y[i] >> z[i];
        c.push_back({x[i], y[i], z[i]});
    }

    ll r[8];
    r[0] = solve(c, [](Cake c) -> ll { return c.x + c.y + c.z; });
    r[1] = solve(c, [](Cake c) -> ll { return c.x + c.y - c.z; });
    r[2] = solve(c, [](Cake c) -> ll { return c.x - c.y + c.z; });
    r[3] = solve(c, [](Cake c) -> ll { return c.x - c.y - c.z; });
    r[4] = solve(c, [](Cake c) -> ll { return -c.x + c.y + c.z; });
    r[5] = solve(c, [](Cake c) -> ll { return -c.x + c.y - c.z; });
    r[6] = solve(c, [](Cake c) -> ll { return -c.x - c.y + c.z; });
    r[7] = solve(c, [](Cake c) -> ll { return -c.x - c.y - c.z; });

    cout << *max_element(r, r+8) << endl;


    return 0;
}

