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

int main() {
    string s;
    cin >> s;
    string keyence = "keyence";
    //REP(i, keyence.size()+1) {
    //    string a = keyence.substr(0, i), b = keyence.substr(i, s.size()-i);
    //    //cout << s.substr(0, i) << endl;
    //    //cout << s.substr(i, s.size()-i) << endl;
    //    //cout << a << ":" << s.find(a) << " " << b << ":" << s.find(b) << endl;
    //    if (s.find(a) != -1 && s.find(b) != -1) {
    //        cout << "YES" << endl;
    //        return 0;
    //    }
    //}
    REP(i, s.size()+1) {
        FOR(j, i, s.size()+1) {
            string str = s;
            str.erase(str.begin()+i, str.begin()+j);
            if (str == keyence) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}
