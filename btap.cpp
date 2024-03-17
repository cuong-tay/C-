#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll c(ll x) {
    int cnt=0;
   while(x){
		int tmp=x%10;
		if(x%2==0) cnt++;
		x/=10;
   } 
   return cnt;
}

ll l(ll y) {
	int cnt=0;
   while(y){
		int tmp=y%10;
		if(tmp%2==1) cnt++;
		y/=10;
   } 
   return cnt;
}

bool cmpc(ll a, ll b) {
    if (c(a)!=c(b)) {
        return c(a) < c(b);
    }
    else return a<b;
}
bool cmpl(ll a, ll b) {
    if (l(a)!=l(b)) {
        return l(a) < l(b);
    }
}
int main(){
int n; cin>>n;
ll a[n],b[n];
for(int i=0;i<n;i++){
	cin>>a[i];
	b[i]=a[i];
}
sort(a,a+n,cmpc);
for(auto x:a) cout<<x<<' ';
cout<<endl;
stable_sort(b,b+n,cmpl);
for(auto x:b) cout<<x<<' ';
return 0;
}

