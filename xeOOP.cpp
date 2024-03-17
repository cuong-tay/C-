#include<bits/stdc++.h>
using namespace std;
class Xe{
	private :
		string hangXe,tenXe,soKhung;
		long dtichXiLanh,giaXe;
	public:
	// Constructors
	Xe(){
	}
	 Xe(string hang, string ten, string soKhung, long xiLanh, long gia){
	 	this->hangXe=hang;
	 	this->tenXe=ten;
	 	this->soKhung=soKhung;
	 	this->dtichXiLanh=xiLanh; 
	 	this->giaXe=gia;
	 }
        
        
	 string getHangXe() const { return hangXe; }
    void setHangXe(const string& hang) { hangXe = hang; }

    string getTenXe() const { return tenXe; }
    void setTenXe(const string& ten) { tenXe = ten; }

    string getSoKhung() const { return soKhung; }
    void setSoKhung(const string& soKhungMoi) { soKhung = soKhungMoi; }

    long getDTichXiLanh() const { return dtichXiLanh; }
    void setDTichXiLanh(long xiLanhMoi) { dtichXiLanh = xiLanhMoi; }

    long getGiaXe() const { return giaXe; }
    void setGiaXe(long giaMoi) { giaXe = giaMoi; }		  
	
	void nhap(){
		getline(cin,hangXe);
		getline(cin,tenXe);
		getline(cin,soKhung);
		cin>>dtichXiLanh>>giaXe;
		cin.ignore();
	}	
	  void display() const {
        cout << "Hang xe: " << hangXe << endl;
        cout << "Ten xe: " << tenXe << endl;
        cout << "So khung: " << soKhung << endl;
        cout << "Dien tich xi lanh: " << dtichXiLanh << " cc" << endl;
        cout << "Gia xe: " << giaXe << " VND" << endl;
    }	
		
	
		
  // Destructor
    ~Xe() {}			
};
class ListXe{
	private:
		vector<Xe> arr;
	public:
	   void add(Xe a){
	   	 arr.push_back(a);
	   }
	   // tinh gia tri binh quan theo xi lanh
	   void sumXiLanh(){
	   	  long long  s = 0,d=0;
	   	for(auto x:arr){
	   		s+=x.getGiaXe();
	   		d+=x.getDTichXiLanh();
		   }
		 if(d>0){
		 	double giaBinhQuan = static_cast<double>(s) / d;
        cout << "Gia trung binh /1dung tich xiLanh: " << giaBinhQuan << " VND" << endl;
		 } else cout<<"ko co xe"<<endl; 
	   }
	  
	 void timXe(string a, long long b) {
    int dem = 0;
    vector<Xe> result;

    for (auto x : arr) {
        if (x.getHangXe() == a && x.getGiaXe() <= b) {
            dem++;
            result.push_back(x);
        }
    }

    if (dem == 0) {
        cout << "Khong tim duoc" << endl;
    } else {
    	cout<<"co "<<dem<<"duoc tim thay"<<endl
        for (auto xe : result) {
            xe.display(); 
            cout << endl; 
        }
    }
}

};
int main(){
Xe b("honda","hhh","76ggg",110,6000000);
Xe a;
a.nhap();
ListXe arr;
arr.add(a); arr.add(b);
arr.sumXiLanh();
cout<<"Xe can tim la: "<<endl;
arr.timXe("honda",8000000);

return 0;
}


