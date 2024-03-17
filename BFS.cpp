#include<bits/stdc++.h>
using namespace std;
void path(int s,int f, int *p){
	if(s==f) cout<<s;
	else { path(s,p[f],p); cout<<"->"<<f;
	}       
}
int main(){
int n,k,m,s,f;
cin>>n;
cin>>k>>m;
cin>>s>>f;
queue<int> Q;
Q.push(s);

int p[n+5],d[n+5]={};
d[s]=1;
while(Q.size()>0 and d[f]==0){
	int u=Q.front(); Q.pop();
	for(int v:{u+k,u-m})
	if(v>=1 and v<=n and d[v]==0){
		d[v]=d[u]+1;
		p[v]=u;
		Q.push(v);
	}
}
cout<<d[f]-1<<endl;
if(d[f]){
	cout<<"so buoc "<<d[f]-1<<endl;path(s,f,p);
} else cout<<"ko di duoc"<<endl;
return 0;
}


