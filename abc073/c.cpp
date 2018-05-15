#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
    int N, A;
    cin >> N;

    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> A;
        if (v.size() != 0) {
            vector<int>::iterator itr = lower_bound(v.begin(), v.end(), A);
            if (itr != v.end()) {
                itr = v.erase(itr);
            } else {
                v.push_back(A);
                sort(v.begin(), v.end());
            }
        } else {
            v.push_back(A);
        }
    }
    cout << v.size() << endl;
}
