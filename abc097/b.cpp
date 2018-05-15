#include <bits/stdc++.h>
using namespace std;

int X;

main()
{
    cin >> X;

    int max = 1;
    for (int i = 2; i < X; i++) {
        for (int j = 2; pow(i, j) <= X; j++) {
            int p = pow(i, j);
            if (max < p) {
                max = p;
            }
        }
    }
    cout << max << endl;
    return 0;
}
