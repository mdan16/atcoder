#include <bits/stdc++.h>
using namespace std;

int N, D, X;
int total=0;

main()
{
    cin >> N >> D >> X;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        for (int j = 1; j <= D; j+=a) {
            total += 1;
        }
    }

    cout << total + X << endl;
    return 0;
}
