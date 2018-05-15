#include <bits/stdc++.h>
using namespace std;

int N, M;
int p[100001], x[100001], y[100001];

struct UnionFind {
    vector<int> par;
    UnionFind(int n) : par(n) {
        for (int i = 0; i < n; i++) {
            par[i] = i;
        }
    }
    int root (int x) {
        if (x == par[x]) return x;
        else return par[x] = root(par[x]);
    }
    void unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return;
        par[x] = y;
    }
    bool same(int x, int y) {
        return root(x) == root(y);
    }
};

main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> p[i];
        p[i]--;
    }
    UnionFind uf(N);
    for (int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
        x[i]--;
        y[i]--;
        uf.unite(x[i], y[i]);
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (uf.same(i, p[i])) {
            ans++;
        }
    }
    cout << ans << endl;
}
