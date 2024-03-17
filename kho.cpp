#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
#define x first 
#define y second 
double const eps=1e-4;
double dt(Diem a, Diem b){ return a.x*b.y-a.y*b.x;}
double S(Diem a, Diem b, Diem c){return abs(dt(a,b)+dt(b,c)+dt(c,a))/2;}
double bpkc(Diem a, Diem b){return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);}
Diem tim(Diem a, Diem b, Diem m){
	while(abs(a.x-b.x)>eps or abs(a.y-b.y)>eps){
		Diem C=Diem((a.x+b.x)/2,(a.y+b.y)/2);
		bpkc(m,a)>bpkc(m,b)?a=C:b=C;
	}
	return a;
}
int main(){
	Diem a,b,c,m;
	int t;
	cin>>t;
	while(t--){
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>m.x>>m.y;
	if(S(a,b,c)<S(a,b,m)+S(a,c,m)+S(b,c,m)){
		Diem a1=tim(b,c,m),b1=tim(a,c,m),c1=tim(b,a,m);
		if(bpkc(a1,m)>bpkc(b1,m)) a1=b1;
		if(bpkc(a1,m)>bpkc(c1,m)) a1=c1;
		m=a1;
	}
	printf("%.3f %.3f\n", m.x,m.y);
		
	}
	
}
