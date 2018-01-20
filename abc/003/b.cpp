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
    string s, t;
    cin >> s >> t;

    string r = "atcoder";

    bool flag = true;
    REP(i, s.length()) {
        if ( s[i] != t[i] ) {
            if ( (s[i] == '@' && r.find(t[i]) != string::npos)
                    ||  (t[i] == '@' && r.find(s[i]) != string::npos) ) {
                continue;
            } else {
                flag = false;
                break;
            }
        }
    }

    if ( flag ) {
        cout << "You can win" << endl;
    } else {
        cout << "You will lose" << endl;
    }

    return 0;
}

