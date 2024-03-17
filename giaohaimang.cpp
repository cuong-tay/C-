#include <bits/stdc++.h>
using namespace std;
int mark[100000];
int main() {
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int m;
    cin >> m;
    int b[m + 5];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b, b + m);

    int i = 0, j = 0;
    vector<int> giao;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            giao.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    for (auto it : giao) {
        if(mark[it]==0){
        	cout << it << " ";
        	mark[it]=1;
		}
    }

    return 0;
}

