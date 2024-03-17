#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> a; // Ðúng cú pháp vector

    for (int i = 0; i < n; i++) {
        pair<pair<int, int>, int> temp;
        cin >> temp.first.first >> temp.first.second >> temp.second;
        a.push_back(temp); // Thêm ph?n t? vào vector a
    }

    vector<int> v;
    for (auto it : a) {
        int tong = it.first.first + it.first.second + it.second;
        v.push_back(tong);
    }

    for (auto it : v) {
        cout << it << " ";
    }

    return 0;
}

