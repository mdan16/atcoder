#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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

int N, K;
string S;
int num[100001];
char state[100001];

int main() {
    cin >> N >> K;
    cin >> S;

    int count = 0;
    char pre = S[0];
    int key = 0;
    REP(i,N) {
        if (pre == S[i]) {
            count++;
        } else {
            //num.push_back(count);
            //state.push_back(pre);
            num[key] = count;
            state[key] = pre;
            pre = S[i];
            count = 1;
            key += 1;
        }
    }
    num[key] = count;
    state[key] = pre;
    key += 1;

    int result = 0;
    for (int i = 0; i < key; i+=2) {
        //cout << n << endl;
        //cout << i << endl;
        int total = 0;
        int inc = (state[i] == '1') ? 2*K : 2*K-1;
        for (int j = 0; j <= inc && i+j < key; j++) {
            total += num[i+j];
        }
        //cout << total << endl;
        result = max(result, total);
        if (i == 0 && state[i] == '0') {
            i--;
        }
    }
    cout << result << endl;
}
