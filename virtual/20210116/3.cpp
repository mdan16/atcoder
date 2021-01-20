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

int n;

int main() {
    cin >> n;
    vector<int> x(n);
    vector<int> sorted_x(n);

    REP(i, n) {
        cin >> x[i];
        sorted_x[i] = x[i];
    }
    sort(sorted_x.begin(), sorted_x.end());

    //REP(i, n) {
    //    cout << sorted_x[i] << endl;
    //}

    int med_a = sorted_x[(n)/2-1];
    int med_b = sorted_x[(n)/2];
    REP(i, n) {
        if (x[i] <= med_a) {
            cout << med_b << endl;
        } else {
            cout << med_a << endl;
        }
    }
}
