#include<bits/stdc++.h>
using namespace std;
class date{
	private:
		int day,month,year;
	public:
	    date();
	    void update(int,int,int);
		void hienthi();	
};
date::date(){
	day =1;
	month =1; year = 1900;
}
void date::hienthi(){
	if(day<10){
		cout<<"0"<<day;
	} else cout<<day;
	cout<<"/";
	if(month<10){
		cout<<"0"<<month;
	} else cout<<month;
	cout<<"/";
	if(year<1000){
		cout<<"0"<<year;
	} else cout<<year;
	cout<<endl;
}
void date::update(int a, int b, int c){
	if(day+a<10){
		cout<<"0"<<day+a;
	} else cout<<day+a;
	cout<<"/";
	if(month+b<10){
		cout<<"0"<<month+b;
	} else cout<<month+b;
	cout<<"/";
	if(year+c<1000){
		cout<<"0"<<year+c;
	} else cout<<year+c;
}
main(){
	date x;
	x.hienthi();
	int a,b,c;
	cout<<"cap nhat ngay: "; cin>>a;
	cout<<"cap nhat thang: "; cin>>b;
	cout<<"cap nhat nam: "; cin>>c;
	cout<<endl;
	x.update(a,b,c);
}

