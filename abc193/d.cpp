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

ll k;
string s, t;

bool win(vector<int> s, vector<int> t, int a, int b) {
    ll score_s = 0, score_t = 0;
    s[a]++;
    t[b]++;
    REP(i, s.size()) {
        score_s += i * pow(10, s[i]);
        score_t += i * pow(10, t[i]);
    }
    return (score_s > score_t);
}

int main() {
    cin >> k >> s >> t;
    vector<int> ss(10, 0), tt(10, 0);
    REP(i, 4) {
        ss[(s[i] - '0')]++;
        tt[(t[i] - '0')]++;
    }

    ll w = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i == j) {
                if (ss[i] + tt[i] + 2 > k) continue;
                if (win(ss, tt, i, j)) {
                    w += (k - (ss[i] + tt[i])) * (k - (ss[i] + tt[i]) - 1);
                }
            } else {
                if (ss[i] + tt[i] + 1 > k) continue;
                if (ss[j] + tt[j] + 1 > k) continue;
                if (win(ss, tt, i, j)) {
                    w += (k - (ss[i] + tt[i])) * (k - (ss[j] + tt[j]));
                }
            }

        }
    }
    long double ans = (long double)w / ((k*9-8) * (k*9-9));
    //cout << w << endl;
    //cout << ((k*9-8) * (k*9-9)) << endl;
    cout << setprecision(10) << ans << endl;
}
