#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FOR(i,a,b)  for(ll i=a;(i)<(b);++(i))
#define RFOR(i,a,b) for(ll i=a;(i)>=(b);--(i))
#define REP(i,n)    FOR(i,0,n)
#define RREP(i,n)   RFOR(i,n,0)
#define ALL(v)      v.begin(), v.end()
#define UNIQ(v)     sort(ALL(v)); v.erase(unique(ALL(v)), v.end())
#define BIT(n)      (1LL<<(n))
#define DEBUG(a)    cerr << #a << " = " << a << endl

const double PI = acos(-1);
const int inf = 1001001001;
const int mod = (int)1e9+7;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int main() {
    string s;
    cin >> s;
    vector<ll> a(s.length()+1, 0);
    REP(i, s.length()) {
        if (s[i] == '<') {
            a[i+1] = a[i] + 1;
        }
    }
    RREP(i, s.length()) {
        if (s[i] == '>') {
            a[i] = max(a[i+1] + 1, a[i]);
        }
    }
    //REP(i, s.length()+1) {
    //    cout << a[i] << " ";
    //}
    //cout << endl;
    cout << accumulate(a.begin(), a.end(), 0LL) << endl;
}
