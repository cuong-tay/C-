#include<bits/stdc++.h>
using namespace std;
//phan vung anh trong laptrinhonline
// thuat toan DFS
int a[1000][1000],n,m;
int hh[]={0,0,-1,1};
int hc[]={-1,1,0,0};
/*
int DFS(int u,int v){
	 a[u][v]=-1;int d=1;
	 stack<pair<int,int>> s;
	 s.push({u,v});
	 while(s.size()>0){
	 	int x=s.top().first;int y=s.top().second;
	 	s.pop();
	 	for(int i=x-1;i<=x+1;i++){
	 		for(int j=y-1;j<=y+1;j++){
	 			if(i>=1 && i<=n && j>=1 && j<=m &&a[i][j]==0){
	 				a[i][j]=-1;
	 				d++;
	 				s.push({i,j});
				 }
			 }
		 }
	 }
	 return d;
}
*/
void DFS(int u, int v){
	a[u][v]=-1; 
	stack<pair<int,int>> s;
	s.push({u,v});
	while(s.size()>0){
		int x=s.top().first;int y=s.top().second;
		s.pop();
		for(int h=0;h<4;h++){
			int i=x+hh[h],j=y+hc[h];
				if(i>=1 && i<=n && j>=1 && j<=m &&a[i][j]==0){
	 				a[i][j]=-1;
	 			
	 				s.push({i,j});
				 }
		}
	}
}
int main(){
cin>>n>>m;
cin.ignore();
int k=0;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		cin>>a[i][j];
	}
}
for(int i=1;i<=n;i++){
	if(a[i][1]==0) DFS(i,1);
	if(a[i][m]==0) DFS(i,m);
}
	for(int j=1;j<=m;j++){
    if(a[1][j]==0) DFS(1,j);
	if(a[n][j]==0) DFS(n,j);	
	}
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if(a[i][j]==0){
			k++;
			 DFS(i,j);}
		
	}}
cout<<k;

}


