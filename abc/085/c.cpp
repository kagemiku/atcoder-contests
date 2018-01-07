#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

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
    int n, y;
    cin >> n >> y;

    REP(i, n + 1) {
        REP(j, n - i + 1) {
            int z = n - i - j;
            if ( z < 0 ) {
                continue;
            }

            if ( 10000 * i + 5000 * j + 1000 * z == y ) {
                cout << i << " " << j << " " << z << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}

