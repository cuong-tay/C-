#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
string s; cin>>s;
stack<char> st;
for(char x:s){
	if(x=='(') st.push(x);
	else {
		if(st.empty()){
			cout<<"NO\n"; return 0;
		}
		st.pop();
	}
}
if(st.empty()) cout<<"yes\n";
else cout<<"no\n";
return 0;
}

