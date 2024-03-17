#include<bits/stdc++.h>
using namespace std;
long long fibonaci(long long n){
	long long f1=1,f2=1,f,i=2;
	if(n<2) return 1;
	while(i<=n){
		f=f1+f2;
		f1=f2;
		f2=f;
		i++;
	}
	return f;
}

int main() {
   long long n=10;
   //while(cin>>n){
   	cout<<fibonaci(n)<<endl;
   //}
    return 0;
}

