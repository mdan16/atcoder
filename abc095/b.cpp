#include <bits/stdc++.h>
using namespace std;

int N, X, m;
int min_m = 1000, total = 0;

main()
{
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        cin >> m;
        total += 1;
        X -= m;
        if (m < min_m) {
            min_m = m;
        }
    }
    total += X / min_m;
    cout << total << endl;
}
