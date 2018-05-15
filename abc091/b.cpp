#include <bits/stdc++.h>
using namespace std;

int N, M;
map<string, int> mp;

main()
{
    cin >> N;
    string input;
    for (int i = 0; i < N; i++) {
        cin >> input;
        mp[input]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> input;
        mp[input]--;
    }
    
    int max = 0;
    map<string, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        if (max < it->second) {
            max = it->second;
        }
    }
    cout << max << endl;
}
