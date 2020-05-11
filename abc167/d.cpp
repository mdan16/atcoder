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

ll N, K;
vector<ll> A;
int loop_start;
int loop_start_count;

int loop() {
    vector<bool> arrived(N, false);
    // check loop start position
    int now = 1;
    loop_start_count = 0;
    while(true) {
        if (arrived.at(now - 1) == true) {
            loop_start = now;
            break;
        }
        arrived.at(now - 1) = true;
        now = A.at(now - 1);
        loop_start_count++;
    }

    // check loop length
    int loop_len = 0;
    now = 1;
    bool in_loop = false;
    while(true) {
        now = A.at(now - 1);
        if (now == loop_start) {
            if (in_loop) {
                break;
            } else {
                in_loop = true;
            }
        }
        if (in_loop) {
            loop_len++;
        }
    }
    return loop_len;
}

int main() {
    cin >> N >> K;
    A.resize(N);
    FOR(i, 0, N) {
        cin >> A.at(i);
    }

    int location = 1;

    int loop_len = loop();

    int move_num = (K - loop_start_count) % loop_len;
    int now = loop_start;
    if (move_num < 0) {
        now = 1;
        move_num = K;
    }
    FOR(i, 0, move_num) {
        now = A.at(now - 1);
    }
    cout << now << endl;
}
