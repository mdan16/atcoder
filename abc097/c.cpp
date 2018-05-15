#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> sv;
int K;

main()
{
    cin >> s >> K;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 1; j <= s.length() - i && j <= 5; j++) {
            sv.push_back(s.substr(i, j));
        }
    }
    sort(sv.begin(), sv.end());
    sv.erase(unique(sv.begin(), sv.end()), sv.end());

    cout << sv[K-1] << endl;
}
