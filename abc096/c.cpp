#include <bits/stdc++.h>
using namespace std;

int H, W;
char s[50][50];

bool check(int i, int j)
{
    if (i >= 0 && s[i-1][j] == '#') {
        return true;
    }
    if (i < 50 && s[i+1][j] == '#') {
        return true;
    }
    if (j >= 0 && s[i][j-1] == '#') {
        return true;
    }
    if (j < 50 && s[i][j+1] == '#') {
        return true;
    }
    return false;
}

main()
{
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (s[i][j] == '.') {
                continue;
            }
            if (!(s[i][j] == '#' && check(i, j))) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
