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

int A, B, C, K;

int main() {
    cin >> A >> B >> C >> K;

    int rest[] = {A, B, C};
    int num[] = {1, 0, -1};
    int index = 0;
    int sum = 0;

    FOR(i, 0, 3) {
        if (K > rest[i]) {
            sum += num[i] * rest[i];
            K -= rest[i];
        } else {
            sum += num[i] * K;
            break;
        }
    }

    cout << sum << endl;
}
