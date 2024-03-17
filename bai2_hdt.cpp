#include<bits/stdc++.h>
using namespace std;
class line{
	private:
		double x,y;
		double x0,y0;
	public:
	   line();
	   void nhap();
	   void in();
	   double kc();
	   bool kt(double,double);	
};
line::line(){
}
void line::nhap(){
	cout<<"nhap diem bat dau: ";
	cin>>x>>y;
	cout<<"nhap diem ket thuc: ";
	cin>>x0>>y0;
}
void line::in(){
	cout<<"diem bat dau va ket thuc lan luot la : "<<endl;
	cout<<x<<" "<<y<<endl<<x0<<" "<<y0<<endl;
}
double line::kc(){
	return sqrt((x0-x)*(x0-x)+(y0-y)*(y0-y));
}
bool line::kt(double m, double n){
	double a=(y-y0)/(x-x0);
	double b=y0-a*x0;
	if(m*a+b==n){
		return true;
	} 
}
main(){
	line a;
	a.nhap();
	a.in();
	double kc = a.kc();
	cout<<"Do dai doan thang : ";
	cout<<kc<<endl;
	double x,y;
	cout<<"Nhap diem de ktra : ";
	cin>>x>>y;
	bool kq = a.kt(x,y);
    if(kq){
    	cout<<"diem do thuoc doan thang"<<endl;
	} else cout<<"diem khong thuoc doan thang"<<endl;
return 0;	
}

