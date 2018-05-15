#include <bits/stdc++.h>
using namespace std;

int A, B, C, D;

main()
{
    cin >> A >> B >> C >> D;
    cout << min(A, B) + min(C, D) << endl;
    return 0;
}
