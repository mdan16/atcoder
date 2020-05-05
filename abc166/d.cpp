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
#define DEBUG(a)    cout << #a << " = " << a << endl

const ll inf = 1e15;
const ll mod = 1e9+7;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int X;

int main() {
    cin >> X;

    int A = X;
    int B = X;
    if (X >= 0) {
        FOR(a, 0, A + 1) {
            FOR(b, a, B + 1) {
                int sum = pow(a, 5) + pow(b, 5);
                if (sum > X) {
                    break;
                } else if (sum == X) {
                    cout << a << " " << -1 * b << endl;
                    return 0;
                }
            }
        }
    } else {
        RFOR(a, 0, A - 1) {
            RFOR(b, a, B - 1) {
                int sum = pow(a, 5) + pow(b, 5);
                if (sum < X) {
                    break;
                } else if (sum == X) {
                    cout << a << " " << -1 * b << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
