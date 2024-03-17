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
        for (int i = bac; i>=0; i--) {
            if (i == 0) {
                cout << heSo[i];
            } else {
            cout << heSo[i] << "x^" << i<<" + ";
            }
        }
        cout <<endl;
    }
    daThuc operator+(const daThuc &a) const {
        int maxBac = max(this->bac, a.bac);
        daThuc tong;
        tong.bac = maxBac;
        tong.heSo.resize(maxBac + 1, 0.0);
        for (int i = 0; i <= maxBac; i++) {
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
cout<<"Nhap da thuc P(x): \n";
x.nhapDaThuc();
cout<<"Nhap da thuc Q(x): \n";
y.nhapDaThuc();
cout<<"P(x): ";
x.inDaThuc();
cout<<"Q(x): ";
y.inDaThuc();
double giatri=x.tinhGiatri(3);
cout<<"P(3): "<<giatri<<endl;
double d=x.daoham(2);
cout<<"P(2)' la: "<<d<<endl;
daThuc tongXY = x+y;
    cout << "Tong hai da thuc X + Y: ";
    tongXY.inDaThuc();
double tong=x.tinhGiatri(1.2)+x.daoham(1.2)+y.tinhGiatri(1.3)+y.daoham(1.3);
cout<<"Tong Pd+Pd'+Qd1+Qd1' la:(d=1.2,d1=1.3) "<<tong<<endl;

return 0;
}


