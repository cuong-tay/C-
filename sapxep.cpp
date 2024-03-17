#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//sapxep: sort : nlogn (<=10^6)
   // stable_sort
//[x,y] => sort(a+x,a+y+1)  
//[x,y] =>> sort(a.begin()+x,a.begin()+y+1) 
int tongcs(int n){
	int d=0;
	while(n){
		d+=n%10;
		n/=10;
	}
	return d;
}
bool cmp(int a, int b){
	//return abs(a)<abs(b); // sap xep tri tuyet doi tang dan
	return tongcs(abs(a))<tongcs(abs(b));
}
int main(){
 int n; cin>>n;
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 sort(a,a+n, cmp); // tang dan
 //sort(a.begin(),a.end()) //tang dan
 for(int x:a) cout<<x<<' ' ;
 cout<<endl;
 sort(a,a+n, greater<int>());// giam dan kieu int muon kieu ll hay char thi thay cho <int>
  
 
 for(auto x:a) cout<<x<<' ';
return 0;
}

