#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <algorithm>

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
    int n, h;
    cin >> n >> h;

    int a[100000], b[100000];
    REP(i, n) {
        cin >> a[i] >> b[i];
    }

    int maxA = *max_element(a, a + n);
    sort(b, b + n);
    reverse(b, b + n);

    int count = 0;
    REP(i, n) {
        if ( b[i] <= maxA ) {
            continue;
        } else if ( h <= 0) {
            break;
        }

        h -= b[i];
        ++count;
    }

    if ( h > 0 ) {
        count += h / maxA;
        if ( h % maxA != 0 ){
            ++count;
        }
    }

    cout << count << endl;


    return 0;
}

