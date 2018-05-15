#include <bits/stdc++.h>
using namespace std;

int H, W, D, Q;
int X[100000] = {}, Y[100000] = {};
int L, R;

main()
{
    cin >> H >> W >> D;
    int A;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A;
            X[A] = i;
            Y[A] = j;
        }
    }
    cin >> Q;
    int now = 0;
    for (int i = 0; i < Q; i++) {
        cin >> L >> R;
        int magic = 0;
        now = L;
        while (now != R) {
            magic += abs(X[now] - X[now+D]) + abs(Y[now] - Y[now+D]);
            now += D;
        }
        cout << magic << endl;
    }

}
