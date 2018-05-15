#include <bits/stdc++.h>
using namespace std;

long long int N, M, ans = 0;
int pos[] = {-1, 0, 1};

main()
{
    cin >> N >> M;
    if (N > 1 && M > 1) {
        ans = N * M - (2 * N + 2 * M -4);
    } else if (N == 1 && M == 1) {
        ans = 1;
    } else {
        ans = N * M -2;
    }
    cout << ans << endl;
}
