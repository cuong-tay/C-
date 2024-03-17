#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//set : cay nhi phan tim kiem
//multiset : luu duoc cac gia tri trung nhau
//unordered_set : hash table: bang bam : dau vao khong duoc sap theo thu tu gi het ngau nhien
// dung ham unordered_set do phuc tap thuat toan se dao dong tu O1->>O(N) con hai cai kia luon la logN
//nhap gia tri vao : insert(x): logN
//size(): O1
int main(){
 /* set<char> se;  //giong vector nma duoc cai phan tu se tu dong xuat hien chi co mot
                //lan va mac dinh duoc sap xep tang dan voi so va tang dan theo tu dien voi ki tu
  se.insert('a');
  se.insert('b');
  se.insert('p');
  cout<<se.size()<<endl;
  for(auto x:se){
  	cout<<x<<" ";
  }
  cout<<endl;
  for(auto it=se.begin();it!=se.end();it++){
  	cout<<*it<<" ";
  }*/
  //find(x) : logN tim gtri bat ki trong set rat nhah ngang tim kiem nhi phan
multiset<int> se;
for(int i=0;i<=5;i++) se.insert(i);
se.insert(2);
se.insert(1);
if(se.find(10)==se.end()){ // no se tro ve end neu khong set khong co gia tri do
	cout<<"khong tim thay\n";
}  else cout<<"tim thay\n";
  //count(x) : logN :ham dem so lan xuat hien
  if(se.count(9)!=0){
  	cout<<"ok\n";
  } else cout<<"no\n";
  //erase(x) : logN :ham xoa phan tu trong set
  // trong multiset khi xoa la xoa het cac ptu trung neu muon xoa 1 ptu trung thoi thi
  //ta dung ham find(X) xoa 
  auto it = se.find(1); //tra ve den ptu 1 dau tien trong multiset
  se.erase(it);
  for(auto x: se) cout<<x<<" ";
  cout<<endl; cout<<se.count(1);
  
return 0;
}

