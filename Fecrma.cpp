#include<bits/stdc++.h>
using namespace std;
long long m=1000;
long long Pow(long long a, long long n){
	if(n==0) return 1;
	if(n%2==0) return Pow(a*a%m, n/2);
	return Pow(a*a%m,n/2)*a%m;
}
int main(){
long long a=0,n=0;
//cin>>a>>n;
//a%=m;
string A,N;
cin>>A>>N;
for(auto z:A) a=(a*10+z-'0')%m;
for(auto z:N) n=(n*10+z-'0')%400;
if(n==0) n=400;

 cout << setw(3) << setfill('0') << Pow(a, n);



return 0;
}


