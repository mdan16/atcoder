#include <bits/stdc++.h>
using namespace std;

char c;

main()
{
    for (int i = 0; i < 9; i++) {
        cin >> c;
        if (i == 0 || i == 4 || i == 8) {
            cout << c;
        }
    }
    cout << endl;
}
