#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void heapify(int a[],int n, int i) { //tao maxheap de sap xep tang dan
  
	int l=2*i+1;
	int r=2*i+2;
	int laget =i;
	if(l<n and a[l]>a[laget]){
		laget=l;
	}
	if(r<n and a[r]>a[laget]){
		laget=r;
	}
	if(laget!=i){//ktra xem neu khac nut goc thi doi cho sao cho nut goc la lon nhat
		swap(a[i],a[laget]);
		heapify(a,n,laget);
	}
}    // giam dan dung minheap
// min heap
void minheap(int a[],int n, int i) { 
  
	int l=2*i+1;
	int r=2*i+2;
	int laget =i;
	if(l<n and a[l]<a[laget]){
		laget=l;
	}
	if(r<n and a[r]<a[laget]){
		laget=r;
	}
	if(laget!=i){//ktra xem neu khac nut goc thi doi cho sao cho nut goc la lon nhat
		swap(a[i],a[laget]);
		minheap(a,n,laget);
	}
}
void heapsort(int a[], int n){
	//xay dung max heap
	for(int i=n/2 -1;i>=0;i--){
		heapify(a,n,i);
	}
	//xet
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
	  heapify(a,i,0); // giam so luong phan tu cua mang di vi so lon nhat da dc ve cuoi day
	}
}
int main(){
 int n; cin>>n;
 int a[n+5];
 for(int i=0;i<n;i++){
 	cin>>a[i];
 }
 cin.ignore();
 heapsort(a,n);
 for(int i=0;i<n;i++) cout<<a[i]<<" ";
return 0;
}

