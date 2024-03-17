#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//multimap
//unordered_map
int main(){
	//multimap<int,int> mp;
	unordered_map<int,int> mp;
	mp.insert({100,5});
	mp.insert({1,2});
	mp.insert({2,3});
	mp.insert({100,0});
	//mp.erase(1);//xoa key nao la trong map co bao nhieu key nó xóa het
	// neu dung mp.erase xoa key ko co trong map se bi loi ko chay dc
	auto it=mp.find(1);
	mp.erase(it);
	
	for(auto it:mp) cout<<it.first<<' '<<it.second<<endl;
	

return 0;
}

