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
    int n, k;
    cin >> n >> k;
    vl vals(n);
    REP(i, n) {
        cin >> vals[i];
        if ( i > 0 ) {
            vals[i] += vals[i - 1];
        }
    }

    int sub = n - k + 1;
    ll sum = 0LL;
    for ( auto i = 0; i < n - k + 1; i++ ) {
        if ( i != 0 ) {
            sum -= vals[i - 1];
        }
        sum += vals[i + k - 1];
    }

    cout << sum << endl;

    return 0;
}

