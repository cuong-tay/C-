#include<bits/stdc++.h>
using namespace std;

main(){
int n,m,x,y;
cin>>n>>m;
vector<int> A[n+5];//danh sach ke
int d[n+5]={},g[n+5]={},k=0;
for(int i=1;i<=m;i++){
	cin>>x>>y;
	A[x].push_back(y);
	A[y].push_back(x);
}
for(int i=1;i<=n;i++)
	if(d[i]==0){
		g[++k]++;
		d[i]=k;
		stack<int> s;
		s.push(i);
		while(s.size()){
			int u=s.top(); s.pop();
			for(int v:A[u]) if(d[v]==0) {
				d[v]=k;
				g[k]++; s.push(v);
			}
		}
	}

cout<<k<<"\n"<<*max_element(g+1,g+k+1);
return 0;
}


