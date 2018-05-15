#include <iostream>
using namespace std;

main()
{
    int N;
    cin >> N;
    int l, r, total = 0;
    for (int i = 0; i < N; i++) {
        cin >> l >> r;
        total += r - l + 1;
    }

    cout << total << endl;
}
