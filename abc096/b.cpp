#include <bits/stdc++.h>
using namespace std;

int A, B, C, K;

main()
{
    cin >> A >> B >> C >> K;

    int max_num = max(A, max(B, C));

    int sum = max_num * pow(2, K);
    sum = sum - max_num + (A + B + C);

    cout << sum << endl;
    return 0;
}
