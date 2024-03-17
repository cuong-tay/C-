#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
	}
	int z; cin>>z;
    for (int i = 0; i < z; i++) {
    	
        int x;
        cin >> x;
        if (x == 1) {
            int k;
            cin >> k;
            int t; cin>>t;
            v.insert(v.begin() + k, t);
        } else if (x == 2) {
        	int t; cin>>t;
            if (!v.empty()) {
                v.erase(v.begin() + t);
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


