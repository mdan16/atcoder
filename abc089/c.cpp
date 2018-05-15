#include <bits/stdc++.h>
using namespace std;

int N;
long long int num[5] = {};

main()
{
    cin >> N;
    string name;
    for (int i = 0; i < N; i++) {
        cin >> name;
        switch (name[0]) {
            case 'M':
                num[0]++;
                break;
            case 'A':
                num[1]++;
                break;
            case 'R':
                num[2]++;
                break;
            case 'C':
                num[3]++;
                break;
            case 'H':
                num[4]++;
                break;
            default:
                break;
        }
    }

    long long int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += num[i] * num[j] * num[k];
            }
        }
    }
    cout << ans << endl;
}
