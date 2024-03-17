#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,res=0;
cin>>n;
long long a[n],b[n];
for(auto &x:a) cin>>x;
partial_sum(a,a+n,b);

for(int x:a) cout<<x<<" "; cout<<"\n";
for(int x:b) cout<<x<<" ";

return 0;
}


