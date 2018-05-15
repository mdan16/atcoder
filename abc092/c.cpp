#include <bits/stdc++.h>
using namespace std;

int N, A[100005];
int total = 0;

main()
{
    cin >> N;
    A[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        total += abs(A[i] - A[i-1]);
    }
    A[N+1] = 0;
    total += abs(A[N]);

    for (int i = 1; i <= N; i++) {
        int cost = total - (abs(A[i] - A[i-1]) + abs(A[i] - A[i+1]))
            + abs(A[i-1] - A[i+1]);
        cout << cost << endl;
    }
    return 0;
}
