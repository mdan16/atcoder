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

const double PI = acos(-1);

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int main() {
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    double dh = double(60*H+M)/720 * 2*PI;
    double dm = double(M)/60 * 2*PI;
    double xh = A*cos(dh), yh = A*sin(dh);
    double xm = B*cos(dm), ym = B*sin(dm);

    double dx = xh - xm, dy = yh - ym;
    double ans = sqrt(dx*dx + dy*dy);

    printf("%.10f\n", ans);

    return 0;
}
