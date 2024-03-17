#include <bits/stdc++.h>
#include "dslkdon.cpp"
using namespace std;
typedef long long ll;

class nv {
private:
    int ma, namsinh, luong;
    string name, gtinh;

public:
    int getma() {
        return this->ma;
    }
    int getluong(){
    	return luong;
	}
    friend istream &operator>>(istream &in, nv &x) {
        in >> x.ma;
        in.ignore();
        getline(in, x.name);
        in >> x.namsinh;
        in.ignore();
        getline(in, x.gtinh);
        in >> x.luong;
        return in;
    }

    friend ostream &operator<<(ostream &out, const nv &x) {
        out << x.ma <<"\t"<< x.name << "\t" << x.namsinh << "\t"<< x.gtinh <<"\t"<< x.luong;
        return out;
    }
};

class qlnv {
private:
    slist<nv> a;

public:
    void add(nv x, int n);
    void xoa(int x);
    void inds();
};

void qlnv::add(nv x, int n) {
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
}
void qlnv::xoa(int x){
slist<nv>::iterator it;
it=a.begin();
int ok=0;
for(auto i=0;i<a.size();i++){
	if(x==(*it).getma()){
		a.erase(i);
		ok=1;
		break;
	}
	it++;
}
 if(ok){
 	cout<<"da xoa"<<endl;
 }else cout<<"khong tim thay luong nhu vay de xoa"<<endl;
}
void qlnv::inds() {
  	slist<nv>::iterator it;
    		it=a.begin();
    		int ok=0;
        for (auto i=0;i<a.size();i++) {
            if((*it).getluong()>2000000){
            	cout<<*it<<"\t"<<endl;
            	ok=1;
			}
           it++; 
        }
        if(ok==0)
        cout<<"khong co nhan vien nao luong >2tr"<<endl;
}

int main() {
    qlnv quanly;
    nv x;
    int n;
    cin >> n;
    cin.ignore();
    quanly.add(x, n);
    quanly.xoa(876);
    quanly.inds();
    return 0;
}

