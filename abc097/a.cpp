#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

main()
{
    cin >> a >> b >> c >> d;

    if (abs(a - c) <= d) {
        cout << "Yes" << endl;
        return 0;
    } else if (abs(a - b) <= d && abs(b - c) <= d) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
