#include<bits/stdc++.h>
using namespace std;

class toado {
private:
    double a,b;

public:
    toado(){
	}
    double kc(){
     double kc=sqrt(this->a*this->a+b*b);
	 return kc;	
	}
	 
    friend istream& operator>>(istream& in, toado& x) {
        in>>x.a;
        in>>x.b;
        return in;
    }

    friend ostream& operator<<(ostream& out, toado x) {
       out<<x.a<<" "<<x.b<<endl;
        return out;
    }
    friend double kc2diem(toado k,toado m){
    	double kq=sqrt((k.a-m.a)*(k.a-m.a)+(k.b-m.b)*((k.b-m.b)));
    	return kq;
	}

};
//lop ban co the truy cap vao private 
/*class LopB {
public:
   void nhap(LopA &obj){
   	cin>>obj.a;
   	cin>>obj.b;
   }
   void sum(LopA obj){
   	cout<<"Tong cua 2 so a va b: "<<obj.a+obj.b<<endl;
   }
};*/

int main() {
  toado a;
  cin>>a;
  cout<<a;
  toado b;
  cin>>b;
  cout<<"kc den goc toa do: "<<a.kc()<<endl;
  cout<<"kc giua hai diem: "<<kc2diem(a,b)<<endl;
   
}


