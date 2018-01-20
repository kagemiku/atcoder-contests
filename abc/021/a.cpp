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

    vi ls(4, 0);
    int sum = 0;
    int idx = 0;
    while ( n != 0 ) {
        int mod = n % 2;
        if ( mod != 0 ) {
            ++sum;
        }
        ls[idx++] = mod;
        n /= 2;
    }
    cout << sum << endl;

    int a[4] = {1, 2, 4, 8};
    REP(i, ls.size()) {
        if ( ls[i] ) {
           cout << a[i] << endl;
        }
    }

    return 0;
}

