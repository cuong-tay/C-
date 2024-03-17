#include<bits/stdc++.h>
#include"dslkdon.cpp"
using namespace std;

class nv {
private:
    int ma, namsinh, luong;
    string ht, gt;

public:
    nv() {}

    friend istream& operator>>(istream& in, nv& x) {
        in >> x.ma;
        in.ignore();
        getline(in, x.ht);
        in >> x.namsinh;
        in.ignore();
        getline(in, x.gt);
        in >> x.luong;
        return in;
    }

    friend ostream& operator<<(ostream& out, const nv& x) {
        out << x.ma << " " << x.ht << " " << x.namsinh << " " << x.gt << " " << x.luong;
        return out;
    }

    string getht() const {
        return this->ht;
    }

    int getma() {
        return this->ma;
    }

    int getnamsinh() const {
        return this->namsinh;
    }

    int getluong()  {
        return this->luong;
    }

    string getgt() const {
        return this->gt;
    }
    void setma(int m) {
        this->ma = m;
    }

};

class qlnv {
private:
    slist<nv> x;

public:
    void add(int n, nv a) {
        for (int i = 0; i < n; i++) {
            cin >> a;
            x.push_back(a);
        }
    }
   
    void xoa(int k) {
    		slist<nv>::iterator it;
      it=x.begin();
    for (auto i=0;i<x.size();i++) {
        if (k == (*it).getma()) {
           x.erase(i);
            break;
        } 
        it++;
    }
    cout<<"ko tim thay nhan vien de xoa ma: "<<k<<endl;
    }

    void display() {
    		slist<nv>::iterator it;
    		it=x.begin();
        for (auto i=0;i<x.size();i++) {
            if((*it).getluong()>2000000){
            	cout<<*it<<"\t"<<endl;
			}
           it++; 
        }
        cout<<"khong co nhan vien nao luong >2tr"<<endl;
    }
};

int main() {
    nv a;
    qlnv x;
    int n;
    cin >> n;
    x.add(n, a);
    int k; cout<<"nhap ma can xoa: ";cin>>k;
    x.xoa(k);
    cout<<"Danh sach nv luong >2tr \n";
    x.display();

    return 0;
}

