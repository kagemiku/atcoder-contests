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
    int x, y;
    cin >> x >> y;

    vector<vector<int> > g;
    g.push_back(vector<int>{1, 3, 5, 7, 8, 10, 12});
    g.push_back(vector<int>{4, 6, 9, 11});
    g.push_back(vector<int>{2});

    for ( auto h : g ) {
        if ( find(begin(h), end(h), x) != h.end() ) {
            if ( find(begin(h), end(h), y) != h.end() ) {
                cout << "Yes" << endl;
                break;
            } else {
                cout << "No" << endl;
                break;
            }
        }
    }

    return 0;
}

