#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<char, int>> frequency;
    char A[n + 5];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        bool found = false;

        for (int j = 0; j < frequency.size(); j++) {
            if (frequency[j].first == A[i]) {
                frequency[j].second++;
                found = true;
                break;
            }
        }

        if (!found) {
            frequency.push_back(make_pair(A[i], 1));
        }
    }

    
    cout << frequency.size() << endl;

    for (int i = 0; i < frequency.size(); i++) {
        cout << frequency[i].first << " " << frequency[i].second << endl;
    }

    return 0;
}

