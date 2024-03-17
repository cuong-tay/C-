#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// intro sort : quick-sort + heap sort : non stable
// stable_sort : merge sort : stable
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second){
		return a.first<b.first;
	}  else
	 return a.second>b.second;
}
int main(){
int n; cin>>n;
map<int,int> mp;
vector<pair<int,int>> v;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
	mp[a[i]]++;
}
for(auto it : mp) {
   v.push_back(it);
}
sort(v.begin(), v.end(),cmp);
for(auto x: v){
	for(int j=0;j<x.second;j++){
		cout<<x.first<<' ';
	}
	
}
return 0;
}

