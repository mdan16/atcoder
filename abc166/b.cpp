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

int N, K;
int d, A;

int main() {
    cin >> N >> K;
    vector<int> okashi(N, 0);
    //cout << "size" << okashi.size() << endl;
    FOR(i, 0, K) {
        cin >> d;
        FOR(j, 0, d) {
            cin >> A;
            okashi[A-1]++;
        }
    }
    auto count = count_if(okashi.begin(), okashi.end(), [](int x) { return x == 0; });
    cout << count << endl;
}
