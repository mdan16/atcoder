#include <bits/stdc++.h>
using namespace std;

int MAX = 100;
int A, B;
char G[100][100];
int pos[] = {-1, 0, 1};

void print()
{
    cout << "100 100" << endl;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << G[i][j];
        }
        cout << endl;
    }
}

bool check(int h, int w, char c)
{
    for (int i = 0; i < 3; i++) {
        int x = h + pos[i];
        if (x < 0 || x >= MAX) {
            continue;
        }
        for (int j = 0; j < 3; j++) {
            int y = w + pos[j];
            if (y < 0 || y >= MAX) {
                continue;
            }
            if (G[x][y] == c) {
                return false;
            }
        }
    }
    return true;
}

main()
{
    cin >> A >> B;

    for (int i = 0; i < MAX; i++) {
        if (i < MAX / 2) {
            for (int j = 0; j < MAX; j++) {
                G[i][j] = '#';
            }
        } else {
            for (int j = 0; j < MAX; j++) {
                G[i][j] = '.';
            }
        }
    }

    for (int i = 1, h = 0, w = 0; i < A;) {
        if (check(h, w, '.')) {
            G[h][w] = '.';
            i++;
            
            w += 2;
            if (w >= MAX) {
                w = 0;
                h += 1;
            }
        } else {
            w += 1;
            if (w >= MAX) {
                w = 0;
                h += 1;
            }
        }
    }

    for (int i = 1, h = MAX-1, w = MAX-1; i < B;) {
        if (check(h, w, '#')) {
            G[h][w] = '#';
            i++;
            
            w -= 2;
            if (w < 0) {
                w = MAX-1;
                h -= 1;
            }
        } else {
            w -= 1;
            if (w < 0) {
                w = MAX-1;
                h -= 1;
            }
        }
    }

    print();
}
