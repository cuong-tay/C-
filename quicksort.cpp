#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int phanhoach(int a[], int l, int r){
	int chot=a[l];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			i++;
		}while(a[i]<chot);
		do{
			j--;
		}while(a[j]>chot);
		if(i<j){
			swap(a[i],a[j]);
		} else return j;
	}
}
void quicksort(int a[], int l, int r){
	if(l>=r) return;
	if(l<r){
	
	int p=phanhoach(a,l,r);
	quicksort(a,l,p);
	quicksort(a,p+1,r);}
}
 main(){
int n; cin>>n;
int a[n+5];
for(int i=0;i<n;i++) {
cin>>a[i];}
quicksort(a,0,n-1);
for(int i=0;i<n;i++){
	cout<<a[i]<<' ';
}
return 0;
}

