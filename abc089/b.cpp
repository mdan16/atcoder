#include <bits/stdc++.h>
using namespace std;

int N;

main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;
        if (c == 'Y') {
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
    return 0;
}
