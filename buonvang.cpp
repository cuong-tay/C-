#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,res=0;
cin>>n;
long long a[n];
for(auto &x:a) cin>>x;
/*for(int i=0;i<n-1;i++){
	long long  z=*max_element(a+i,a+n);
	if(z>a[i]) res+=z-a[i];
}
cout<<res;
*/
long z=0;
for(int i=n-1;i>=0;i--){
	if(a[i]<z){
		res+=z-a[i];
	} else
	z=a[i];
}
cout<<res;
return 0;
}


