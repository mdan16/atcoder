#include <bits/stdc++.h>
using namespace std;

int N, M, R;
int c[200][200] = {};
vector<int> r;

int dfs(int now, int cost, vector<int> r2)
{
    if (r2.size() == 0) {
        //cout << cost << endl;
        return cost;
    }
    int min = 0;
    for (int i = 0; i < r2.size(); i++) {
        if (c[now][r2[i]] == 0) {
            continue;
        }
        cost += c[now][r2[i]];
        vector<int> r3 = r2;
        for (auto x : r3) {
            cout << x;
        }
        cout << endl;
        r3.erase(r3.begin() + i);
        int cost2 = dfs(r2[i], cost, r3);
        //cout << cost2 << endl;
        if (min == 0 || min > cost2) {
            min = cost2;
        }
    }
    return min;
}

main()
{
    cin >> N >> M >> R;
    int r_t;
    for (int i = 0; i < R; i++) {
        cin >> r_t;
        r.push_back(r_t);
    }
    int A, B, C;
    for (int i = 0; i < M; i++) {
        cin >> A >> B >> C;
        c[A][B] = C;
    }

    int min = 0;
    for (int i = 0; i < r.size(); i++) {
        vector<int> r2 = r;
        r2.erase(r2.begin() + i);
        int cost = dfs(r[i], 0, r2);
        //cout << cost << endl;
        if (min == 0 || min > cost) {
            min = cost;
        }
    }
    cout << min << endl;
}
