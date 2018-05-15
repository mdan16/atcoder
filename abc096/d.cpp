#include <bits/stdc++.h>
using namespace std;

int N;
int sosu_t[55556] = {0};
vector<int> sosu;

main()
{
    cin >> N;
    for (int i = 2; i <= sqrt(55555); i++) {
        for (int j = 2*i; j <= 55555; j+=i) {
            sosu_t[j] = 1;
        }
    }
    for (int i = 2; i < 55555; i++) {
        if (sosu_t[i] == 0) {
            sosu.push_back(i);
        }
    }

    int cnt = 0;
    for (auto itr = sosu.begin(); itr != sosu.end(); itr++) {
        if (*itr%5 == 1) {
            if (cnt == 0) {
                cout << *itr;
            } else {
                cout << " " << *itr;
            }
            cnt++;
            if (cnt == N) {
                break;
            }
        }
    }
    cout << endl;
}
