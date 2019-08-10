#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

#define FOR(i,a,b)  for(ll (i)=a;(i)<(b);++(i))
#define RFOR(i,a,b) for(ll (i)=a;(i)>=(b);--(i))
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
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
ull s;
map<ull, ll> num;

ull convert(string input) {
    ull ret = 1;
    for (char &c: input) {
        ret *= prime[c-'a'];
    }
    return ret;
}

int main() {
    cin >> N;
    string input;
    for (int i = 0; i < N; i++) {
        cin >> input;
        s = convert(input);
        num[s]++;
    }

    ll result = 0;
    for (auto n: num) {
        //cout << n.first << "=" << n.second << endl;
        result += n.second * (n.second - 1) / 2;
    }
    cout << result << endl;
}
