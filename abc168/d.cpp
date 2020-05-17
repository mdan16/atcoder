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
    vector<int> arrow(N, -1);
    vector<vector<int>> road(N+1);
    int A, B;
    REP(i, M) {
        cin >> A >> B;
        road.at(A).push_back(B);
        road.at(B).push_back(A);
    }

    vector<int> next, next_tmp;
    next.push_back(1);
    arrow.at(0) = 0;
    int done = 1;
    while(done < arrow.size()) {
        //cout << "rest:" << count(arrow.begin(), arrow.end(), -1) << endl;
        //cout << "arrow" << endl;
        //REP(i, arrow.size()) {
        //    cout << i+1 << ":" << arrow.at(i) << endl;
        //}
        //cout << "next:" << next.size() << endl;
        REP(i, next.size()) {
            REP(j, road.at(next.at(i)).size()) {
                if (arrow.at(road.at(next.at(i)).at(j)-1) != -1) {
                    continue;
                }
                arrow.at(road.at(next.at(i)).at(j)-1) = next.at(i);
                next_tmp.push_back(road.at(next.at(i)).at(j));
                done++;
            }
        }
        next = next_tmp;
        next_tmp.clear();
    }
    cout << "Yes" << endl;
    REP(i, arrow.size() - 1) {
        cout << arrow.at(i+1) << endl;
    }
}
