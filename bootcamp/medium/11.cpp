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
    vector<vector<char>> area(h, vector<char>(w));
    REP(i, h) {
        REP(j, w) {
            cin >> area[i][j];
        }
    }

    vector<int> skip_h;
    REP(i, h) {
        bool zip = true;
        REP(j, w) {
            if (area[i][j] == '#') {
                zip = false;
                break;
            }
        }
        if (zip) {
            skip_h.push_back(i);
        }
    }
    vector<int> skip_w;
    REP(j, w) {
        bool zip = true;
        REP(i, h) {
            if (area[i][j] == '#') {
                zip = false;
                break;
            }
        }
        if (zip) {
            skip_w.push_back(j);
        }
    }

    REP(i, h) {
        if (find(ALL(skip_h), i) != skip_h.end()) {
            continue;
        }
        REP(j, w) {
            if (find(ALL(skip_w), j) != skip_w.end()) {
                continue;
            }
            cout << area[i][j];
        }
        cout << endl;
    }
}
