#include <bits/stdc++.h>
using namespace std;

int N, A[200001] = {};
int ans = 0;
int done[200001][200001] = {}, sum[200001][200001] = {};

int calc(int s, int e)
{
    if (done[s][e] != 0) {
        return sum[s][e];
    }
    return calc(s, e-1) + A[e];
}

main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum[i][i] = A[i];
    }

    int tmp;
    for (int i = 0; i < N; i++) {
        for (int j = 2; j + i <= N; j++) {
            for (int k = 0; k < j; k++) {
                tmp = calc(i, i + j - 1);
                done[i][i + j - 1] = 1;
                sum[i][i + j - 1] = tmp;
                if (tmp == 0) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}
