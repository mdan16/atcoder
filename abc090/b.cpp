#include <bits/stdc++.h>
using namespace std;

int A, B, ans = 0;

main()
{
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        string s = to_string(i);
        string s_r = s;
        reverse(s_r.begin(), s_r.end());
        if (s == s_r) {
            ans++;
        }
    }
    cout << ans << endl;
}
