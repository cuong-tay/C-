#include<bits/stdc++.h>
using namespace std;
double COS(double);
double SIN(double x){
	if(abs(x)<1e-4) return x;
	return 2*SIN(x/2)*COS(x/2);
}
double COS(double x){
	if(abs(x)<1e-4) return 1;
	double u=SIN(x/2),v=COS(x/2);
	return v*v-u*u;
}
double gt(long long n){
	return n==0?1:gt(n-1)*n;
}
map<int,long long> Dic;
// de quy co nho
long long Fibo(int n){
	if(Dic.find(n)!=Dic.end()) return Dic[n];
	return Dic[n]=n<2?1:Fibo(n-1)+Fibo(n-2);
}
map<pair<int,int>,long long> D;
long long C(int k, int n){
	if(k==0 or k==n) return D[{k,n}]=1;
	if(D.find({k,n})!=D.end()) return D[{k,n}];
	return D[{k,n}]=C(k-1,n-1)+C(k,n-1);
}
int tach(int n){
	if(n<5 or n%2) return 1;
	return tach(n/2-2)+tach(n/2+2);
}
void ve(int n, string p="\n"){
	if(n>4 and n%2==0) ve(n/2-2,p+"\t");
	cout<<p<<n;
	if(n>4 and n%2==0) ve(n/2+2,p+"\t");
}
int main(){

int n; cin>>n;
cout<<tach(n)<<endl;
ve(n);

//for(int i=0;i<=n;i++){
//	
//	for(int j=0;j<=i;j++) cout<<C(j,i)<<" ";
//	cout<<"\n";
//}

return 0;
}


