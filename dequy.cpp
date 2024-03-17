#include<bits/stdc++.h>
using namespace std;
//long long zero(int n){
//	if(n==0) return 1;
//	long long s=0;
//	for(long long a=1;a*a<=n;a++){
//		if(n%a==0) s+=zero((a-1)*(n/a+1));
//	}
//	return s;
//}
//long long m=1e9+7;
//map<int,long long> d;
//long long zero(int n){
//	if(n==0) return d[n]=1;
//	if(d[n]) return d[n];
//	long long s=0;
//	for(long long a=1;a*a<=n;a++){
//		if(n%a==0 )  d[n]=(d[n]+zero((a-1)*(n/a+1)))%m;
//	}
//	return d[n];
//}
set<string> res;
void lietke(string x){
	if(x=="") return;
	if(res.find(x)==res.end()){
		res.insert(x);
		lietke(x.substr(0,x.size()-1));
		lietke(x.substr(1,x.size()-1));
	}
}
int main(){
//int t;
//cin>>t;
//while(t--){
//	int n;
//	cin>>n;
//	cout<<zero(n)<<endl;
//}
string s;
cin>>s;
lietke(s);
for(auto r:res) cout<<r<<"\n";

return 0;
}


