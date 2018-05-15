#include <bits/stdc++.h>
using namespace std;

int N;
char c[301][301];

main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> c[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << c[i][j];
        }
        cout << endl;
    }
}
