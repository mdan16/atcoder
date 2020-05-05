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

int N;
int A[200001];

int main() {
    cin >> N;
    int max=0, min=1000000001;
    FOR(i, 0, N) {
        cin >> A[i];
    }

    int result = 0;

    FOR(a, 0, N) {
        FOR(b, a + A[b] + min, N) {
            int hight_sum = A[a] + A[b];
            if ((b - a) == hight_sum) {
                result++;
            }
        }
    }

    cout << result << endl;
}
