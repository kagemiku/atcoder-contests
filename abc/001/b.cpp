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
    int m;
    cin >> m;

    if ( m < 100 ) {
        cout << "00" << endl;
    } else if ( m <= 5000 ) {
        int res = m / 100;
        if ( res < 10 ) {
            cout << "0";
        }
        cout << res << endl;
    } else if ( m <= 30000 ) {
        cout << m / 1000 + 50 << endl;
    } else if ( m <= 70000 ) {
        cout << (m / 1000 - 30) / 5 + 80 << endl;
    } else {
        cout << 89 << endl;
    }
    return 0;
}

