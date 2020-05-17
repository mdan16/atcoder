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
    int N;
    cin >> N;

    int s = N % 10;

    if (s == 2 || s == 4 || s == 5 || s == 7 || s == 9) {
        cout << "hon" << endl;
    } else if (s == 0 || s == 1 || s == 6 || s == 8) {
        cout << "pon" << endl;
    } else {
        cout << "bon" << endl;
    }
}
