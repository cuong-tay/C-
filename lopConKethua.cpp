#include<bits/stdc++.h>
using namespace std;
class Nv{
	private:
		int ma;
		string hten;
	public:
		Nv(){
		}
		Nv(int ma, string hten){
			this->ma=ma;
			this->hten=hten;
		}
		int getMa() const { return ma; } 
    string getTen() const { return hten; }
	  void nhap(){
	  	cout<<"nhap ma Nv: ";
	  	cin>>ma;
	  	
	  	cin.ignore();
	  	cout<<"nhap ten: ";
		  getline(cin,hten);
		
	  }	
	  void in() {
        cout << "Ma: " << ma << ", Ho ten: " << hten << ", ";
    }
};
class BienChe:public Nv{
	private:
		double hsl;
		int congtac;
	public:
		BienChe(){
		}
	     void nhap() {
        Nv::nhap();
        cout << "Nhap he so luong: ";
        cin >> hsl;
        cout << "Nhap so nam cong tac: ";
        cin >> congtac;
    }
	long long int luong(){
		int pc; 
        long long int luong = 0;
        if (congtac >= 15) {
            pc = 25000;
        } else if (congtac >= 10) {
            pc = 18000;
        } else if (congtac >= 5) {
            pc = 7000;
        } else {
            pc = 10000;
        }
       return  hsl * 1800000 + pc;
	}	
	void in() {
	Nv::in();
        

        cout << "He so luong: " << hsl << ", So nam cong tac: " << congtac << endl;
        cout << "Luong la: " << to_string(this->luong()) << endl;
    }
    
};
class HopDong:public Nv{
	private:
		string ngayCong;
		long long tien;
	public:
	   	void nhap() {
        Nv::nhap();
        cout << "Nhap ngay cong: ";
        cin.ignore();
        getline(cin, ngayCong);
        cout << "Nhap tien: ";
        cin >> tien;
    }

    void in() {
        Nv::in();
        cout << "Ngay cong: " << ngayCong << ", Tien: " << tien << endl;
    }
};
class lis{
	private:
		vector<BienChe> lis;
	public:
	   void add(){
	   	int n; cin>>n;
	   	for(int i=0;i<n;i++){
	   		BienChe* k= new BienChe();
	   		k->nhap();
	   		lis.push_back(*k);
		   }
	   }
	  void luongtb(){
	  	long long int sum=0;
	   	 for(auto x:lis){
	   	 	sum+=x.luong();
			}
			double tb=sum/lis.size();
		cout<<"luong trung binh la : "<<to_string(tb)<<endl;	
	   }
	   
	   void timTen(int maTimKiem) {
        bool found = false;
        for (const auto& x : lis) {
            if (x.getMa() == maTimKiem) {
                cout << "Tim thay nhan vien co ma " << maTimKiem << ": " << x.getTen() << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Khong tim thay nhan vien co ma " << maTimKiem << endl;
        }
    }	
};
int main(){
  lis danhSach;
    danhSach.add();
    danhSach.luongtb();

return 0;
}


