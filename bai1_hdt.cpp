#include<bits/stdc++.h>
using namespace std;
class diem {
	private :
		double x,y;
	public:
      diem(); 
	   void nhapdiem();
	   void indiem();	
	   double kc(diem& d);
};
diem::diem(){	
}

void diem::nhapdiem(){
	cin>>this->x;
	cin>> this->y;
	cin.ignore();
}
void diem::indiem(){
	cout<<x<<" "<<y<<endl;
}
double diem::kc(diem& d){
	double khoangcach =sqrt((d.x-x)*(d.x-x)+(d.y-y)*(d.y-y));
	return khoangcach;
}
main(){
	int n;
	cout<<"Nhap so diem:"; cin>>n;
	diem a[n+5];
	cout<<"cac diem nhap:"<<endl;
	for(int i=0;i<n;i++){
		 cout << "Nhap toa do diem " << i + 1 << ": ";
		a[i].nhapdiem();
	}
	cout<<"in cac diem vua nhap:"<<endl;
	for(int i=0;i<n;i++){
		a[i].indiem();
	}
	double kc=0;
	for(int i=0;i<n-1;i++){
      kc=	a[i].kc(a[i+1]);
      cout<<kc<<" ";
	}
return 0;
}

