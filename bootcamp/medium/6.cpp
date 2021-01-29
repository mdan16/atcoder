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

int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

string area[51];

int main() {
    int h, w;
    cin >> h >> w;

    REP(i, h) {
        cin >> area[i];
    }

    REP(i, h) {
        REP(j, w) {
            if (area[i][j] == '#') {
                continue;
            }
            int count = 0;
            REP(k, 8) {
                int x = i + dx[k];
                int y = j + dy[k];
                if (x < 0 || y < 0) continue;
                if (area[x][y] == '#') {
                    count++;
                }
            }
            area[i][j] = (char)(count+48);
        }
    }

    REP(i, h) {
        REP(j, w) {
            cout << area[i][j];
        }
        cout << endl;
    }
}
