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
    int n;
    cin >> n;

    vi xs, ys, cs;
    vector<double> xs2, ys2;
    REP(i, n) {
        int x, y, c;
        cin >> x >> y >> c;
        xs.pb(x);
        ys.pb(y);
        cs.pb(c);

        xs2.pb(1.0*x/c);
        ys2.pb(1.0*y/c);
    }

    double xsum = accumulate(begin(xs2), end(xs2), 0);
    double ysum = accumulate(begin(ys2), end(ys2), 0);
    double xcent = 1.0*xsum/n, ycent = 1.0*ysum/n;

    double maxt = 0.0;
    REP(i, n) {
        double t = cs[i]*max(abs(xs[i] - xcent), abs(ys[i] - ycent));
        if ( t > maxt ) {
            maxt = t;
        }
    }

    cout << fixed << setprecision(5) << maxt << endl;

    return 0;
}

