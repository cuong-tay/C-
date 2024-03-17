#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            int k;
            cin >> k;
            v.push_back(k);
        } else if (x == 2) {
            if (!v.empty()) {
                v.pop_back();
            }
        }
    }

    if (v.empty()) {
        cout << "EMPTY";
    } else {
        for (auto it : v) {
            cout << it << " ";
        }
    }

    return 0;
}


