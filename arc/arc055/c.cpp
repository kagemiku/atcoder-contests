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
    cin >> s;

    int slen = s.length();
    int aidx = 1;
    ll sum = 0;
    for ( int a2 = slen/2 + 1; a2 < slen - 1; a2++ ) {
        string head = s.substr(0, 1);
        if ( head[0] != s[a2] ) {
            continue;
        }

        for ( int alen = 1; alen < slen - a2; alen++ ) {
            int clen = slen - a2 - alen;
            if ( a2 - clen < 2 ) {
                continue;
            } else if ( head[aidx - 1] != s[a2 + alen - 1] ) {
                continue;
            }

            string head2 = s.substr(a2, alen);
            if ( head == head2 ) {
                string subc = s.substr(a2 - clen, clen);
                string subc2 = s.substr(a2 + alen, clen);
                if ( subc[0] != subc2[0] || subc[clen - 1] != subc2[clen - 1] ) {
                    continue;
                } else if ( subc == subc2 ) {
                    ++sum;
                }
            }
            head.append(s.substr(aidx++, 1));
        }
        aidx = 1;
    }

    cout << sum << endl;

    return 0;
}

