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

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> H(N);
    REP(i, N) cin >> H[i];
    int A, B;
    vector<bool> good(N, true);
    REP(i, M) {
        cin >> A >> B;
        --A;
        --B;
        if (H[A] < H[B]) {
            good[A] = false;;
        } else if (H[A] > H[B]) {
            good[B] = false;
        } else {
            good[A] = false;
            good[B] = false;
        }
    }
    cout << std::count(good.begin(), good.end(), true) << endl;
}
