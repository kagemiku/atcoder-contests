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
    string s;
    int k;
    cin >> s >> k;

    int sz = s.size();
    int a[sz];
    REP(i, sz) {
        a[i] = s[i] - 'a';
    }

    REP(i, sz) {
        if ( i == sz - 1 ) {
            a[i] = (a[i] + k) % 26;
            break;
        }
        if ( a[i] == 0 ) {
            continue;
        }
        int d = 26 - a[i];
        if ( k >= d ) {
            a[i] = 0;
            k -= d;
        }
    }

    REP(i, sz) {
        cout << static_cast<char>(a[i] + 'a');
    }
    cout << endl;

    return 0;
}

