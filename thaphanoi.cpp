#include<bits/stdc++.h>
using namespace std;

void thn(int n, char a, char b, char c, int &count) {
    int i = 1;
    if (n > 1) {
        thn(n - 1, a, c, b, count);
    }

    cout << "Buoc" << count++ << " Chuyen dia " << n << " tu " << a << " sang " << b << endl;

    if (n > 1) {
        thn(n - 1, c, b, a, count);
    }
}

int main() {
    int count = 1; 
    int n;
    cin>>n;
    thn(n, 'A', 'B', 'C', count);

    return 0;
}

