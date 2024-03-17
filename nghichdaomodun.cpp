#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long power(long long a, long long n, long long m) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        n /= 2;
    }
    return result;
}
long long Pow(long long a, long long n){
	if(n==0) return 1;
	if(n%2==0) return Pow(a*a%m, n/2);
	return Pow(a*a%m,n/2)*a%m;
}
long long modInverse(long long a, long long m) {
    return power(a, m - 2, m);
}
int main(){
long long A[100005]={1,1},B[100005]={1,1};
for(int i=1;i<=1e5;i++){
	A[i]=A[i-1]*i%m;
	B[i]=B[i-1]*Pow(i,m-2)%m;
}

long long t,n,k;
cin>>t;
while(t--){
	cin>>n>>k;
	cout<<A[n]*B[k]%m*B[n-k]%m<<"\n";
}

return 0;
}


