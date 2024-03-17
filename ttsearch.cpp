#include<bits/stdc++.h>
using namespace std;
/*
for(int x:{4,7,2,8}) st.push(x);
cout<<st.top();
set<int> s;
//set<int,greater<int>> s; // se dc luu giam dan 
for(int x:{4,7,2,8,3}) s.insert(x);
s.erase(2);
for(int x:s) cout<<x<<" ";
*/
int main(){
int n;
cin>>n;
stack<int> s;
set<int> out;
s.push(n); out.insert(n);
while(s.size()>0){
	int u=s.top();s.pop();
	for(int a=1;a*a<=u;a++){
		if(u%a==0){
			int v=(a-1)*(u/a+1);
			if(out.find(v)==out.end()){
				s.push(v); out.insert(v);
			}
		}
	}
}
for(int x:out) cout<<x<<" ";

return 0;
}


