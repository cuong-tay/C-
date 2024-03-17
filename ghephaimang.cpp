#include<bits/stdc++.h>
using namespace std;

main(){
	//bai toan sap xep hai mang vao voi nhau
	//hai mang da duoc sap tang dan hoac giam dan
	int n,m; cin>>n>>m;
	int a[n+5], b[m+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int i=0,j=0;
	while(i<n and j<m){
		if(a[i]<=b[j]){
			cout<<a[i]<<' '; i++;
		}
		else {
			cout<<b[j]<<' ';j++;
		}
	}
	while(i<n){
		cout<<a[i]<<' '; i++;
	}
	while(j<m){
		cout<<b[j]<<' ';j++;
	}
}

