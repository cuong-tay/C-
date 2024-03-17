#include<bits/stdc++.h>
using namespace std;
/*
Xay lop da thuc thuoc tinh gom bac cua da thuc va cac he so cua da thuc; 
cac Phuong thuc:
nhap in 1 da thuc
tinh tong 2 da thuc 
tinh gia tri cua da thuc tai 1 so thuc 
tinh dao ham cua da thuc tai 1 so thuc 
*/
class daThuc{
	private:
		int bac;
		vector<double> heSo;
	public:
	    void nhapDaThuc(){
	    	cout<<"Nhap bac cua da thuc: ";
	    	cin>>bac;
	    	 for (int i = 0; i <= bac; i++) {
            cout << "He so cho bac " << i << ": ";
            double a;cin>>a;
            heSo.push_back(a);
        }
        cin.ignore();
		}
	    void inDaThuc() {
           cout << "Da thuc: ";
        for (int i = bac; i>=0; i--) {
            if (i == 0) {
                cout << heSo[i];
            } else {
            cout << heSo[i] << "x^" << i<<" + ";
            }
        }
        cout <<endl;
    }
	daThuc tonghaiDT(daThuc &a){
		int maxBac=max(this->bac,a.bac);
		daThuc tong;
		tong.bac=maxBac;
		  tong.heSo.resize(maxBac + 1, 0.0);
			 for (int i = maxBac; i >= 0; i--) {
            tong.heSo[i] = (i <= this->bac ? this->heSo[i] : 0) + (i <= a.bac ? a.heSo[i] : 0);
        }
        return tong;
	}
	double tinhGiatri(double gtri){
		double s=0;
		for(int i=bac;i>=0;i--){
			s+=pow(gtri,i)*this->heSo[i];
		}
		return s;
	}
	double daoham(double d){
		double s=0;
		for(int i=bac;i>=1;i--){
			s+=pow(d,i-1)*i*this->heSo[i];
		}
		return s;
	}	
};

int main(){
daThuc x,y;
x.nhapDaThuc();
y.nhapDaThuc();
x.inDaThuc();
y.inDaThuc();
double giatri=x.tinhGiatri(3);
cout<<giatri<<endl;
double d=x.daoham(2);
cout<<"dao ham cua da thuc x la: "<<d<<endl;
daThuc tongXY = x.tonghaiDT(y);
    cout << "Tong hai da thuc X + Y: ";
    tongXY.inDaThuc();


return 0;
}


