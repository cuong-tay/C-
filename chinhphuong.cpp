#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int t;
    cin >> t;

    vector<long long> squareSums; // Luu t?ng s? chính phuong

    long long sum = 0;
    for (long long i = 1; i <= 10000000; i++) {
        if (i % 3 == 1) {
            sum += i;
        }
        squareSums.push_back(sum);
    }

    while (t--) {
        long long n;
        cin >> n;

        long long result = (n / 3) * squareSums[n] + (n % 3 == 1 ? squareSums[n - 1] + n : n % 3 == 2 ? squareSums[n - 2] + n : 0);
        result %= MOD;

        cout << result << endl;
    }

    return 0;
}

