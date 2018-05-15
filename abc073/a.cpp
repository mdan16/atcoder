#include <iostream>
#include <string>
using namespace std;

main()
{
    int N;
    cin >> N;
    string n = to_string(N);
    if (n.find("9") != std::string::npos) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
