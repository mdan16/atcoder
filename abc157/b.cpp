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

const int inf = 1001001001;
const int mod = (int)1e9+7;
//const ll inf = 1e15;
//const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int main() {
    int card[3][3];
    REP(i, 3) {
        REP(j, 3) {
            cin >> card[i][j];
        }
    }

    int N;
    cin >> N;
    REP(k, N) {
        int b;
        cin >> b;
        
        REP(i, 3) {
            REP(j, 3) {
                if (card[i][j] == b) {
                    card[i][j] = -1;
                }
            }
        }
    }

    REP(i, 3) {
        if (card[i][0] == -1 && card[i][1] == -1 && card[i][2] == -1) {
            cout << "Yes" << endl;
            return 0;
        }
        if (card[0][i] == -1 && card[1][i] == -1 && card[2][i] == -1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (card[0][0] == -1 && card[1][1] == -1 && card[2][2] == -1) {
        cout << "Yes" << endl;
        return 0;
    }
    if (card[0][2] == -1 && card[1][1] == -1 && card[2][0] == -1) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
