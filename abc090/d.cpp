#include <bits/stdc++.h>
using namespace std;

long long int N, K, ans = 0;

main()
{
    cin >> N >> K;
    if (K == 0) {
        ans = N * N;
    } else {
        for (int i = K; i <= N; i++) {
            ans += N - i;
            for (int j = K+1; j <= i-K; j++) {
                if (i%j >= K) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
