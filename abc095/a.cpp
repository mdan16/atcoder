#include <bits/stdc++.h>
using namespace std;

char s;

main()
{
    int charge = 700;
    for (int i = 0; i < 3; i++) {
        cin >> s;
        if (s == 'o') {
            charge += 100;
        }
    }
    cout << charge << endl;
}
