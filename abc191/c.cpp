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
    int h, w;
    cin >> h >> w;
    vector<pair<int, int>> ps, d_ps, uniq_ps;
    REP(i, h) REP(j, w) {
        char c;
        cin >> c;
        if (c == '#') {
            ps.push_back(make_pair(i * 10 - 5, j * 10 - 5));
            ps.push_back(make_pair(i * 10 + 5, j * 10 - 5));
            ps.push_back(make_pair(i * 10 - 5, j * 10 + 5));
            ps.push_back(make_pair(i * 10 + 5, j * 10 + 5));
        }
    }
    sort(ps.begin(), ps.end());
    uniq_ps = ps;
    UNIQ(uniq_ps);

    REP(i, uniq_ps.size()) {
        //cout << ps[i].first << " " << ps[i].second << endl;
        int cnt = count(ps.begin(), ps.end(), uniq_ps[i]);
        if (cnt == 2 || cnt == 4) {
            continue;
        }
        d_ps.push_back(uniq_ps[i]);
        //if (ps[i-1] == ps[i] && ps[i+1] == ps[i]) {
        //    d_ps.push_back(ps[i]);
        //    continue;
        //}
        //if (ps[i-1] == ps[i] || ps[i+1] == ps[i]) {
        //    continue;
        //}
        //d_ps.push_back(ps[i]);
    }
    //REP(i, d_ps.size()) {
    //    cout << d_ps[i].first << " " << d_ps[i].second << endl;
    //}
    cout << d_ps.size() << endl;
}

