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

    int t[100000], x[100000], y[100000];
    REP(i, n) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool flag = true;
    int px = 0, py = 0, pt = 0;
    REP(i, n) {
        int d = abs(px - x[i]) + abs(py - y[i]);
        int dt = t[i] - pt;
        if ( d > dt ) {
            flag = false;
            break;
        }

        if ( d != dt && !(d % 2 == 0 && dt % 2 == 0) && !(d % 2 != 0 && dt % 2 != 0) ){
            flag = false;
            break;
        }


        px = x[i];
        py = y[i];
        pt = t[i];
    }

    if ( flag ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

