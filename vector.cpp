#include<bits/stdc++.h>

using namespace std;
//vecto<kieu du lieu> ten_vector
//push_back()
//size(): kich thuoc vector
//duyet bang iterator, auto
int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout<<v.size()<<endl;
  cout<<"phan tu dau tien trong vector : "<<v[0]<<endl;	
    cout<<"phan tu cuois cung: "<<v[v.size()-1]<<endl;//hoac v.back()
   for(int i=0;i<v.size();i++){
   	cout<<v[i]<<endl;
   }
  // for(vector<int>::iterator it=v.begin();it!=v.end(); it++){
   //	   cout<<*it<<endl;
  // }
  for (auto it : v) {
        cout << it << endl;
    }

 
}
