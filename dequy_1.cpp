#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long S(long long n){
	return n<2?n:(((n+1)/2)*((n+1)/2)+S(n/2));
	
}
int main(){
int t; cin>>t;
while(t--){
	long long a,b;
	cin>>a>>b;
	cout<<S(b)-S(a-1)<<endl;
}

return 0;
}


