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
    constexpr auto degLen = 16 + 1;
    array<string, degLen> degStrs = {
        "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
        "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N",
    };

    constexpr auto powerLen = 13;
    array<double, powerLen> powerMins = {0.0, 0.3, 1.6, 3.4, 5.5, 8.0, 10.8, 13.9, 17.2, 20.8, 24.5, 28.5, 32.7};
    reverse(begin(powerMins), end(powerMins));

    int dir;
    cin >> dir;
    const auto dirIdx = static_cast<int>((dir/225.0 + 0.5) * 10)/10;

    int dis;
    cin >> dis;
    const auto power = static_cast<int>((dis/60.0*10.0) + 0.5)/10.0;
    auto counter = powerLen - 1;
    for ( const auto& p : powerMins ) {
        if ( power >= p - EPS ) {
            break;
        }
        --counter;
    }

    cout << ((counter == 0) ? string("C") : degStrs[dirIdx]) << " " << counter << endl;

    return 0;
}

