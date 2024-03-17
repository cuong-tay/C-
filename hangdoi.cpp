#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//fifo: first in first out
// giong xep hang thanh toan
// tk dc thanh toan dau tien la thang q.front()
//minimum queue de truy xuat ptu nho nhat trong hang doi bang O1

int main(){
 //queue<int> q;
 //q.push(100);
 //q.push(50);
 //q.push(20);
 //q.push(1);
 //cout<<q.size()<<endl;
 //cout<<q.front()<<endl;
//q.pop();// xoa tk o dinh hang doi tuc thang duoc thanh toan dau tien
 //cout<<q.front()<<endl;
 //cout<<q.empty()<<endl;
 
 // bai toan tim 1000 cac so tu nhien chi co 6 va 8
queue<ll> q;
q.push(6);q.push(8);
vector<ll> lq;
while(1){
	ll dinh = q.front();q.pop();
	lq.push_back(dinh);
	if(lq.size()==1000) break;
	q.push(dinh*10+6);
	q.push(dinh*10+8);
}
for(ll x: lq) cout<<x<<' ';
return 0;
}

