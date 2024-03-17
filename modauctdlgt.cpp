#include<bits/stdc++.h>
using namespace std;
//class: lop
//thuoc tính : atribute = private
//phuong thuc : method, behavior = public
//object : doi tuong

//constructor: ham khoi tao
//-encapsulation : Dong goi 
//-Access modifier:
//-private : gan voi thuoc tinh de bao dam tinh dong goi
//public : gan voi phuong thuc 
//protected



//vidu
class Sinhvien{
	private:
		string id,ten,ns;
		double gpa;
	
	public:
		Sinhvien(); //contructor
		Sinhvien(string, string, string, double);
	  void xinchao();
	  void dihoc();	
};
//implementation
void Sinhvien::xinchao(){
	  cout<<"Heloo?\n";
}
void Sinhvien::dihoc(){
	 cout<<"di hoc\n";
}
Sinhvien::Sinhvien(){
	id = ten = "";
	gpa =0;
}
Sinhvien::Sinhvien(string ma, string name, string birth, double diem){
	cout<<"ham khoi tao co tham so!\n";
	id= ma;
	ten=name;
	ns=birth;
	gpa=diem;
}
main(){
   Sinhvien x("123","cristiano 888", "5/2/2004",3.99);
   x.xinchao();
   x.dihoc();



return 0;   	
}
