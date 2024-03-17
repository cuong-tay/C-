#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//insert() : logN <=> mp[key] = value
// value co the la xau ,ki tu...
//find(x): logn
//count(x) check xem so lan xuat hien cua key 
//mp.erase(x) // xoa ca key va value
int main(){
map<int,int> mp;
 mp.insert({1,2});
 mp.insert({2,1});
 mp.insert({0,19});
 //key phai khac nhau
 mp[4]= 5;
  mp[1]=1; // no se value tu 2 sang 1
 //map<char,int> mp;
 //mp['a']=121;
 //mp['b']=111;
 cout<<mp.size()<<endl;
 //cout<<mp[4]<<endl;
for(pair<int,int> x: mp){
	cout<<x.first<<" "<<x.second<<endl;
}
//c2
for(auto x: mp){
	cout<<x.first<<" "<<x.second<<endl;
	
}
// c3 dung iterator
//for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++){
//	cout<<(*it).first<<' '<<(*it).second<<endl;
//}
// find(x) neu thay se tra ve iterator
//ko thi no ve map.end()
if(mp.find(1)!=mp.end()){ cout<<"tim thay"<<endl;
} else cout<<"ko thay"<<endl;
auto it = mp.find(2);
if(it==mp.end()) cout<<"NOT found\n";
else {
	cout<<it->first<<' '<<it->second<<endl;
}
mp.erase(1);
// c2 
auto it1 = mp.find(0);
mp.erase(it1);
for(auto it:mp) cout<<it.first<<' '<<it.second<<endl;
return 0;
}

