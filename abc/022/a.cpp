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
    int n, s, t;
    cin >> n >> s >> t;

    int sum = 0;
    int w;
    cin >> w;
    if ( s <= w && w <= t ) {
        ++sum;
    }
    REP(i, n - 1) {
        int a;
        cin >> a;
        w += a;
        if ( s <= w && w <= t ) {
            ++sum;
        }
    }

    cout << sum << endl;


    return 0;
}

